from callllama import call_llama
import PySimpleGUI as sg

def main():

    with sg.FlexForm('call llama', auto_size_text=True, default_element_size=(40, 1)) as form:

        layout = [
            [sg.Text('call llama!', font=("Helvetica", 20), text_color='black')],
            [sg.Text('and she shall respond\n')],
            [sg.Text('Game', size=(10, 1), auto_size_text=False, justification='left'), sg.InputText(do_not_clear=True)],
            [sg.Text('Nation', size=(10, 1), auto_size_text=False, justification='left'), sg.InputText(do_not_clear=True)],
            [sg.Text('')],
            [sg.Output(size=(60, 20))],
            [sg.Text('')],
            [sg.ReadFormButton('call llama', button_color=(sg.YELLOWS[0], sg.BLUES[0])), sg.SimpleButton('exit', button_color=(sg.YELLOWS[0], sg.GREENS[0]))]
        ]

        form.Layout(layout)

        while True:
            button, (game, nation) = form.Read()
            if button == 'call llama':
                output = call_llama(game)
                print(output)
            else:
                break

main()
