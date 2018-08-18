from bs4 import BeautifulSoup
from datetime import datetime
from dateutil.parser import parse
from kivy.app import App
from kivy.config import Config
from kivy.properties import ObjectProperty
from kivy.uix.boxlayout import BoxLayout
from pytz import timezone
import pandas as pd
import requests
import sys

Config.set('graphics', 'width', '360')
Config.set('graphics', 'height', '420')
Config.write()

class CallLlama(BoxLayout):
    game_input = ObjectProperty()
    nation_input = ObjectProperty()
    timezone_input = ObjectProperty()

    def call_llama(self):

        self.display.text = 'Llama is not Awaken'

        # Get data from textInputs
        g = self.game_input.text
        n = self.nation_input.text
        t = self.timezone_input.text

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
            local = gmt.astimezone(timezone(t))
            due = local.strftime('%m/%d/%y at %H:%M')

            # Find nation status
            nation = 'Phlegra'
            ln = soup.find(n)
            ns = soup[ln:].split('<td>')[2].split('</td>')[0]

            # Output
            output = str('Game: '+ g + '\nTurn ' + turn + ' due on ' + due + ' ' + t + '\n' + nation + ' status: ' + ns)
            self.display.text = output

        except:
            output = 'Game not Found. Try Again.'
            self.display.text = output

class CallLlamaApp(App):

    def build(self):
        return CallLlama()

callLlamaApp = CallLlamaApp()
callLlamaApp.run()
