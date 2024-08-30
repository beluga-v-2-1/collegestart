#welcome to the program
###so we're gonna make a tic tac toe game which is impossible to defeat
#as the computer that plays this will know all the ways to defeat or draw the player
#the image of the tic tac toe board will be as such
#       |     |
#   {a} | {b} | {c}
#  _____|_____|_____
#       |     |
#   {d} | {e} | {f}
#  _____|_____|_____
#       |     |
#   {g} | {f} | {i}
#       |     |

#
#this is the tic tac toe board
#and the values of weather x or o will be added to a list or a variable
#they will be numebered from a to b to provide ease of use
#

import time

a = " "
b = " "
c = " "
d = " "
e = " "
f = " "
g = " "
h = " "
i = " "



print(f'''
       |     |
    {a}  |  {b}  |  {c}
  _____|_____|_____
       |     |
    {d}  |  {e}  |  {f}
  _____|_____|_____
       |     |
    {g}  |  {h}  |  {i}
       |     |

      ''')

def ty1( message ) :
    for i in message :
        print(i,end="")
        time.sleep(0.07)
    print()
    
def ty2(message):
    for i in message :
        print(i,end="")
        time.sleep(0.01)
    print()
    
def ty3(message):
    for i in message :
        print(i,end="")
        time.sleep(0.001)
    print()

def welcomescreen():
    ty1("welcome to the game (tic tac toe)")
    print(f"  ")
    print(f"+--------------------------------+------------+")
    print(f"|   select mode                  |            |")
    print(f"+--------------------------------+------------+")
    print(f"|  player vs computer (max diff) | type 1     |")
    print(f"|  player vs player 2            | type 2     |")
    print(f"|  tutorial                      | type 3     |")
    print(f"|  exit                          | type 4     |")
    print(f"+--------------------------------+------------+")
    choicer()
def choicer():
    ty1("enter your choice")
    choice=input(">>>")
    if choice.lower()=="end":
        end()
    elif choice=="1":
        botplayer()
    elif choice=="2":
        multiplayer()
    elif choice=="3":
        tutorial()
    elif choice=="4":
        exit()
    else:
        ty2("please enter a number")
        choicer()


def botplayer():
    ty2("this bot is designed to win or draw against every possible scenario... ")
    ty1("best of luck")
    ty1("initiating stockfish 1.7")
    ty1(". . . .")
    ty3("initializing playground")
    print("initiating 17%")
    time.sleep(0.27)
    print("initiating 36%")
    time.sleep(0.14)
    print("initiating 69%")
    time.sleep(0.2)
    print("initiating 93%")
    ty1("Booting playground")
    a = " "
    b = " "
    c = " "
    d = " "
    e = " "
    f = " "
    g = "x"
    h = " "
    i = " "
    print(f'''
           |     |
        {a}  |  {b}  |  {c}
      _____|_____|_____
           |     |
        {d}  |  {e}  |  {f}
      _____|_____|_____
           |     |
        {g}  |  {h}  |  {i}
           |     |

      ''')
    def turn1():
        ty2("your turn...")
        print("enter a number ( 0~9 )")
        option = input(">>>")
        if option=="1":
            botplayer()
        elif option=="2":
            botplayer()
        elif option=="3":
            botplayer()
        elif option=="4":
            botplayer()
        elif option=="5":
            botplayer()
        elif option=="6":
            botplayer()
        elif option=="7":
            botplayer()
        elif option=="8":
            botplayer()
        elif option=="9":
            botplayer()
        else :
            print("stop trying to crash the system")
            turn1()
    
    
    
































welcomescreen()




















       
