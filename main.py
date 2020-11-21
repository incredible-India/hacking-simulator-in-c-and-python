import os
from pygame import mixer
from cowsay import *
import random
import time
from cowsay import *
from pyfiglet import Figlet
def intro():
    os.system('cls.exe')
    f=Figlet(font='slant',width=100)
    print(f.renderText("Hacking Simulator"))
    dragon("Lets Hack The World")
    os.system('intro.exe')

    pass
def denied():
    i = 0
    mixer.init()
    mixer.music.load('sounds\\denied.mp3')
    while (True):

        mixer.music.play()
        os.system('denied.exe')
        time.sleep(1)
        if (i == 4):
            mixer.music.stop()
            break
        i += 1
def granted():
    i = 0
    mixer.init()
    mixer.music.load('sounds\\gran.mp3')
    while (True):

        mixer.music.play()
        os.system('grant.exe')
        time.sleep(1)
        if (i == 4):
            mixer.music.stop()
            break
        i += 1
def wait():
    i = 0
    mixer.init()
    mixer.music.load('sounds\\cia.mp3')
    while (True):

        mixer.music.play()

        time.sleep(5)
        if (i == 1):
            mixer.music.stop()
            break
        i += 1
def shut():
    i = 0
    mixer.init()
    mixer.music.load('sounds\\shut.mp3')
    while (True):

        mixer.music.play()

        time.sleep(3)
        if (i == 1):
            mixer.music.stop()
            break
        i += 1

if __name__ == '__main__':
   intro()
   print("\n\n")
   s=input("Username : @ ")

   os.system("pass.exe")
   print("\n")


   os.system("ip.exe")
   wait()

   print("\n userinfo : @Abhishek@hi")
   time.sleep(1)
   print("\n puc:******************")
   print("\n status : @correct data")

   print("\n puc:******************")

   os.system('last.exe')
   time.sleep(2)

   print("Enter the data code :")
   lis=["shivam","ashu"]
   w=random.choice(lis)

   print("Data code :")
   p=int(input())
   if p==123456:
       granted()

       if w=="shivam":
            os.system('shiva.exe')
       else:
           os.system('ashu.exe')
   else:
       denied()
       time.sleep(2)
       exit()


   print("....End Process...")
   time.sleep(3)
   shut()
   exit()









