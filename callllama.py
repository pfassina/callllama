from bs4 import BeautifulSoup
from datetime import datetime
from dateutil.parser import parse
from pytz import timezone
import requests
from tzlocal import get_localzone

def call_llama(game):
    try:
        game_page = request_game_page(game)
        soup_obj = parse_game_page(game_page)
        verify_game(game, soup_obj)
        game_info = scrape_game_info(game, soup_obj)
        output = format_info(game_info)
        print(output)
    except Exception as e:
        print(e)

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
    game, turn, due, tz, table = game_info
    return str('Game: ' + game + ' || Turn ' + turn +
               '\nNext Host: ' + due + ' ' + tz +
                '\n' + table)

if __name__ == "__main__":
    import sys
    call_llama(sys.argv[1])
