import story
import character
import database
import os

def clear_scr():
    os.system("cls" if os.name == "nt" else "clear")

class play:
    def __init__(self):
        pass
    
    def __log__(self):
        while(True):
            clear_scr()
            self.quit = None
            self.user_auth = input("Choose action: (l) log-in | (s) sign-in | (q) quit: ")

            if self.user_auth == "l":
                while(True):
                    clear_scr()
                    if database.user.auth(input("Enter username: "), input("Enter password: ")):
                        clear_scr()
                        break
                    else:
                        clear_scr()
                        self.quit = input("Wrong username or password. Press (t) try again | (q) quit: ")
                        if self.quit == "q": break
                        
            if self.quit == "q": continue
            
            elif self.user_auth == "s":
                create_user = database.user(input("Enter username: "), input("Enter password: "))
            elif self.user_auth == "q":
                clear_scr(); print("Quitting..."); return False
            return True
        
    def __ui__(self):
        clear_scr()
        print("Entering game!")


    
    
version_1 = play()
if version_1.__log__():# end of log in point, continuing to character creation
     version_1.__ui__()# start of character creation
else:
    print("Player quit...")
    
    