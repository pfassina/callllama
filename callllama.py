from bs4 import BeautifulSoup
from datetime import datetime
from dateutil.parser import parse
from kivy.app import App
from kivy.config import Config
from kivy.properties import ObjectProperty
from kivy.uix.boxlayout import BoxLayout
from pytz import timezone
import requests
from tzlocal import get_localzone

Config.set('graphics', 'width', '420')
Config.set('graphics', 'height', '400')
Config.write()

class callllama(BoxLayout):
    game_input = ObjectProperty()
    nation_input = ObjectProperty()
    timezone_input = ObjectProperty()

    def call_llama(self):

        self.display.text = 'Llama is not Awaken'

        # Get data from textInputs
        g = self.game_input.text
        n = self.nation_input.text.title()

        try:

            # Scrape Llama
            res = requests.get("http://www.llamaserver.net/gameinfo.cgi?game=" + g)
            soup = str(BeautifulSoup(res.content, features="html5lib"))

            # Get game info
            loc = soup.find('Game: ')
            info = soup[loc:].split('<br/>')[1:3]

            turn = info[0].replace('Turn number ','')
            time = info[1].replace('Next turn due: ','').rstrip()

            # Convert to Local Timezone
            gmt = parse(time)
            tz = str(get_localzone())
            local = gmt.astimezone(timezone(tz))
            due = local.strftime('%m/%d/%y at %H:%M')

            # Find nation status
            ln = soup.find(str(n))
            ns = soup[ln:].split('<td>')[2].split('</td>')[0]

            # Output
            output = str('Game: '+ g + ' || Turn ' + turn + '\nNext Host: ' + due + ' ' + tz.split('/')[1].replace('_',' ') + '\n' + n + ' status: ' + ns)
            self.display.text = output

        except:
            output = 'Game not Found. Try Again.'
            self.display.text = output

class callllamaApp(App):

    def build(self):
        return callllama()

callllamaApp = callllamaApp()
callllamaApp.run()
