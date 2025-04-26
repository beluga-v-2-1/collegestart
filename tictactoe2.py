#lets build a board tic tac toe
plug1 = "-"
plug2 = "-"
plug3 = "-"
plug4 = "-"
plug5 = "-"
plug6 = "-"
plug7 = "-"
plug8 = "-"
plug9 = "-"
def board():
    print()
    print(f" {plug1} | {plug2} | {plug3} ")
    print("---+---+---")
    print(f" {plug4} | {plug5} | {plug6} ")
    print("---+---+---")
    print(f" {plug7} | {plug8} | {plug9} ")
    print()
def checkboard():
    global plug1, plug2, plug3, plug4, plug5, plug6, plug7, plug8, plug9
    #checks left to right
    if plug1 == plug2 == plug3 and plug1 != "-":
        print(f"player {plug1} wins ")
        credits()
    elif plug4 == plug5 == plug6 and plug4 != "-":
        print(f"player {plug4} wins ")
        credits()
    elif plug7 == plug8 == plug9 and plug7 != "-":
        print(f"player {plug7} wins ")
        credits()
    # checks up to down
    elif plug1 == plug4 == plug7 and plug1 != "-":
        print(f"player {plug1} wins ")
        credits()
    elif plug2 == plug5 == plug8 and plug2 != "-":
        print(f"player {plug2} wins ")
        credits()
    elif plug3 == plug6 == plug9 and plug3 != "-":
        print(f"player {plug3} wins ")
        credits()
    # checks diagonals
    elif plug1 == plug5 == plug9 and plug1 != "-":
        print(f"player {plug1} wins ")
        credits()
    elif plug3 == plug5 == plug7 and plug3 != "-":
        print(f"player {plug3} wins ")
        credits()
    else:
        return
def turntoplay():
    L = ["X","O","X","O","X","O","X","O","X"]
    for i in L :
        game001(i)
def game001(value):
    global plug1, plug2, plug3, plug4, plug5, plug6, plug7, plug8, plug9
    '''game software goes here'''
    board()
    checkboard()
    print(f"player {value} turn ")
    print("select an option through 1 - 9")
    selection=int(input(">>>"))
    if selection == 1:
        if plug1 != '-':
            print("invalid option try again")
            game001()
        else :
            plug1 = value
            return
    elif selection == 2:
        if plug2 != '-':
            print("invalid option try again")
            game001()
        else :
            plug2 = value
            return
    elif selection == 3:
        if plug3 != '-':
            print("invalid option try again")
            game001()
        else :
            plug3 = value
            return
    elif selection == 4:
        if plug4 != '-':
            print("invalid option try again")
            game001()
        else :
            plug4 = value
            return
    elif selection == 5:
        if plug5 != '-':
            print("invalid option try again")
            game001()
        else :
            plug5 = value
            return
    elif selection == 6:
        if plug6 != '-':
            print("invalid option try again")
            game001()
        else :
            plug6 = value
            return
    elif selection == 7:
        if plug7 != '-':
            print("invalid option try again")
            game001()
        else :
            plug7 = value
            return
    elif selection == 8:
        if plug8 != '-':
            print("invalid option try again")
            game001()
        else :
            plug8 = value
            return
    elif selection == 9:
        if plug9 != '-':
            print("invalid option try again")
            game001()
        else :
            plug9 = value
            return
def welcomescreener():
    print("+--------------------------------------------------------------+")
    print("|        WELCOME TO TIC TAC TOE                                |")
    print("+--------------------------------------------------------------+")
    print("| where gamers come to fulfil their gaming needs               |")    #welcome screen
    print("+------------------------------------+-------------------------+")
    print("| start game                         | TYPE 1                  |")
    print("| instructions                       | TYPE 2                  |")
    print("| credits                            | TYPE 3                  |")
    print("| end this whole program             | TYPE end                |")
    print("+------------------------------------+-------------------------+")
    print()
    print("enter your choice")
    choice=input(">>>")
    if choice == "1":
        turntoplay()
    elif choice == "2":
        instructions1()
    elif choice == "3":
        credits()
    elif choice.lower() == "end":
        print("end")
        exit()
    else:
        print(f"{choice} is not a valid choice")
        print("please select valid choice")
        welcomescreener()
def instructions1():
    print("you're a dork if you dont know how to play tic tac toe")
    welcomescreener()

def credits():
    print("made by Richard")
    welcomescreener()
welcomescreener()
board()