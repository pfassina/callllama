from discord.ext.commands import Bot
from callllama import call_llama
from config import token

BOT_PREFIX = '?'
# with open('token.txt', 'r') as myfile:
#   TOKEN = str(myfile.read())

TOKEN = token('callllama')

client = Bot(command_prefix=BOT_PREFIX)

@client.command(name='callllama', description='returns llama game status')
async def callllama(game):
    await client.say(call_llama(game))

client.run(TOKEN)
