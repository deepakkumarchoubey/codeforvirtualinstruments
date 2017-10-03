import ctypes
from ctypes import wintypes
import time
import serial
import keyboard


import win32com.client as comclt#provides a lot of modules so better to keep it
ser = serial.Serial('COM4',9600)
 
wsh= comclt.Dispatch("WScript.Shell")#used for key press in python.
arduinoc = ser.readline().decode('ascii');

while(1):
   
     #print(arduinoc);
     if(arduinoc=="desired character"):
            time.sleep(0.5)
            keyboard.press(arduinoc)
            time.sleep(0.5)
            keyboard.release(arduinoc)
          
          
          
      

