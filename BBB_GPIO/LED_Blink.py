#Darshan Mistry..

#High speed Led blinking...

import Adafruit_BBIO.GPIO as GPIO 
import time //Time def.
 
GPIO.setup("P8_11", GPIO.OUT) //Pin_10 = GPIO_45 Config as a output
 
while True: //while loop
    GPIO.output("P8_11", GPIO.HIGH)  //for turn on
    time.sleep(0.5)
    GPIO.output("P8_11", GPIO.LOW)  //for turn off
    time.sleep(0.5)
