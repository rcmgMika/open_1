import os
from time import sleep

for i in range(3):
    os.system("sudo ifconfig wlan0 down && sudo macchanger -r wlan0 && sudo ifconfig wlan0 up && sudo macchanger -s wlan0")
    sleep(3)    