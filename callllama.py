from bs4 import BeautifulSoup
from datetime import datetime
from dateutil.parser import parse
from pytz import timezone
import requests
from tzlocal import get_localzone

def call_llama():
    print("thou shalt enter the name of your desired world: ")
    game = input()
    game_info = scrape_game_info(game)
    output = format_info(game_info)
    print(output)

def request_game_page(game):
    try:
        return requests.get("http://www.llamaserver.net/gameinfo.cgi?game=" + game)
    except Exception as e:
        print(e)
        print('Game not Found. Llama is imprisoned.')

def parse_game_page(game_page):
    try:
        return BeautifulSoup(game_page.content, features="html5lib")
    except Exception as e:
        print(e)
        print("error parsing game data")

def nations(soup):
    strip_row = lambda row : ''.join([td.string for td in row.find_all('td')])
    return [strip_row(row) for row in soup.find_all('tr')]

def scrape_game_info(game):
    game_page = request_game_page(game)
    soup_obj = parse_game_page(game_page)
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
    g, turn, due, tz, table = game_info
    return str('Game: '+ g + ' || Turn ' + turn + '\nNext Host: ' + due + ' ' + tz + '\n' + table)


call_llama()

# old gui
        # self.display.text = 'Llama is not Awaken'

        # def __init__(self, **kwargs):
    #     super(callllama, self).__init__(**kwargs)
    #     Window.bind(on_key_down=self._on_keyboard_down)
    #
    # def _on_keyboard_down(self, instance, keyboard, keycode, text, modifiers):
    #     if keycode == 40:  # 40 - Enter key pressed
    #         self.call_llama()

            # Get data from textInputs
        # g = self.game_input.text
        # n = self.nation_input.text.title()

# game_input = ObjectProperty()
    # nation_input = ObjectProperty()
    # timezone_input = ObjectProperty()
    # submit_input = ObjectProperty()

