"""This module is used with the main function `call_llama`

The call_llama function accepts a string and will return a formatted
string with the desired game's current status and hosting time.
If any errors are encountered, call_llama will return a string with
the error text.

The module can also be run as a script from the command line by passing
the target game as an argument.

Example:
    $ python callllama.py myGame
"""

from bs4 import BeautifulSoup
from datetime import datetime
from dateutil.parser import parse
from pytz import timezone
import requests
from tzlocal import get_localzone

def call_llama(game):
    """Find game page on llamaserver and return game info as a formatted string.

    Args:
        game (str): the name of a game hosted on llamaserver.net.

    Returns:
        str: formatted game info, or an error string.
    """
    try:
        game_page = request_game_page(game)
        soup_obj = parse_game_page(game_page)
        verify_game(game, soup_obj)
        game_info = scrape_game_info(game, soup_obj)
        return format_info(game_info)
    except Exception as e:
        return e

def request_game_page(game):
    try:
        return requests.get("http://www.llamaserver.net/gameinfo.cgi?game=" + game)
    except Exception as e:
        raise RuntimeError('Game not Found. Llama is imprisoned.') from e

def parse_game_page(game_page):
    try:
        return BeautifulSoup(game_page.content, features="html5lib")
    except Exception as e:
        raise RuntimeError("error parsing game data") from e

def verify_game(game, soup):
    # there is no table element on page when game doesn't exist
    if soup.find_all('table'):
        return True
    else:
        raise RuntimeError('{0} is not a real game'.format(game))

def nations(soup):
    strip_row = lambda row : ''.join([td.string for td in row.find_all('td')])
    return [strip_row(row) for row in soup.find_all('tr')]

def scrape_game_info(game, soup_obj):
    soup = str(soup_obj)

    loc = soup.find('Game: ')
    info = soup[loc:].split('<br/>')[1:3]
    turn = info[0].replace('Turn number ','')
    time = info[1].replace('Next turn due: ','').rstrip()

    # Convert to Local Timezone
    gmt = parse(time)
    tz = str(get_localzone())
    local = gmt.astimezone(timezone(tz))
    tz_string = tz.split('/')[1].replace('_',' ')
    due = local.strftime('%m/%d/%y at %H:%M')

    # Find nation status
    nation_table = '\n'.join(nations(soup_obj))

    return (game, turn, due, tz_string, nation_table)

def format_info(game_info):
    game, turn, due, tz_string, nation_table = game_info
    info = ' '.join(['Game:', game, '|| Turn', turn,])
    next_host = ' '.join(['Next Host: ', due, tz_string,])
    return '\n'.join([info, next_host, '', nation_table])

if __name__ == "__main__":
    import sys
    print(call_llama(sys.argv[1]))
