from callllama import call_llama

print("Thou shalt enter the name of your desired world: ")
game = input()
output = call_llama(game)
print("BURN THE HERETICS")
print(output)
