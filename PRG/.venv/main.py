import story
import character
import database
import os
import random

def clear_scr():
    os.system("cls" if os.name == "nt" else "clear")

class play: # ver 1.0
    def __init__(self):
        pass
    
    def __log__(self):
        while(True):
            clear_scr()
            self.quit = None; self.who_user = None
 
            self.user_auth = input("Choose action: (l) log-in | (s) sign-in | (q) quit: ")
            if self.user_auth != "l" and self.user_auth != "s" and self.user_auth != "q": 
                continue
            if self.user_auth == "l":
                while(True):
                    clear_scr()
                    self.ask_username = input("Enter username: ")
                    self.ask_password = input("Enter password: ")
                    if database.user.auth(self.ask_username, self.ask_password):
                        self.who_user = database.user.current_user(self.ask_username, self.ask_password)
                        clear_scr()
                        break
                    else:
                        clear_scr()
                        self.quit = input("Wrong username or password. Press (t) try again | (q) quit: ")
                        if self.quit == "q": break
                        
            if self.quit == "q": continue
            elif self.user_auth == "s":
                database.user(input("Enter username: "), input("Enter password: "))
                self.who_user = len(database.database.account)-1
            elif self.user_auth == "q":
                clear_scr(); print("Quitting..."); return False
            return True
        
    def character_selection(self):
        clear_scr()
        print(f"Welcome {database.database.account[self.who_user].username}!")
        character_select = int( input("Choose a character: (1)Barbarian (2)Priest (3)Robin (4)Berserker: "))
        match character_select:
            case 1:
                database.database.account[self.who_user].character = character.Barbarian
            case 2:
                database.database.account[self.who_user].character = character.Priest
            case 3:
                database.database.account[self.who_user].character = character.Robin
            case 4:
                database.database.account[self.who_user].character = character.Berserker
                
    def __fight__(self, enemy, player):
            self.attack_pattern = ["attack", "defend"]
            while True:
                pattern = random.choice(self.attack_pattern)
                clear_scr()
                print(f"(Enemy turn)")
                print(f"\nEnemy health: {enemy.health[0]}\nEnemy Defense: {enemy.defense[0]}\nEnemy Attack: {enemy.attack[0]}")
                print(f"\nAttack pattern: {pattern}")
                if pattern == "attack":
                    character.character.atk_player(character.character, player, enemy)
                else:
                    character.character.defend_enemy(character.character, player, enemy)
                    input("\nEnemy defended so the player automatically attacks. Press any to continue\n")
                    continue
                print(f"\nPlayer health: {player.health[0]}\nPlayer Defence: {player.defense[0]}\nPlayer Attack: {player.attack[0]}")
                input("Continue: ")
                if player.health[0] <= 0:
                    return False
                
                clear_scr()
                print(f"(Player turn)\n")
                print(f"\nEnemy health: {enemy.health[0]}\nEnemy Defense: {enemy.defense[0]}\nEnemy Attack: {enemy.attack[0]}")
                pattern = input("\n(attack) attack | (defend): ")
                print(f"\nAttack pattern: {pattern}")
                if pattern == "attack":
                    character.character.atk_enemy(character.character, player, enemy)
                else:
                    character.character.defend_self(character.character, player, enemy)
                    input("\nPlayer defended so the enemy automatically attacks. Press any to continue\n")
                    continue
                print(f"\nPlayer health: {player.health[0]}\nPlayer Defence: {player.defense[0]}\nPlayer Attack: {player.attack[0]}")
                input("Continue: ")
                if enemy.health[0] <= 0:
                    return True
                
    def __ui__(self):
        clear_scr()
        while True:
            clear_scr()
            selector = input("Welcome to WORDCRAFT!\n(p) play\n(q) quit\n:")
            if selector == "q":
                clear_scr()
                print("Thanks for playing!")
                break
            elif selector != "p":
                continue
            while True:
                clear_scr()
                selector = input("Modes:\n(d) dungeon\n(b) back\n:")
                if selector == "b":
                    break
                elif selector != "d":
                    continue
                if self.__fight__(character.Barbarian, database.database.account[self.who_user].character):
                    print("Player won!")
                    input()
                else:
                    print("Player lost")
                    input()
              
                    
        

    
    
version_1 = play()
if version_1.__log__():# end of log in point, continuing to character creation
     version_1.character_selection()# start of character creation
     version_1.__ui__()# start of UI
else:
    print("Player quit...")
    
    