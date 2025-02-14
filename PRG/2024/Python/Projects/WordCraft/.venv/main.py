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
                if player.health[0] <= 0:
                    return False
                elif enemy.health[0] <= 0:
                    return True
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
                print(f"\nPlayer health: {player.health[0]}\nPlayer Defense: {player.defense[0]}\nPlayer Attack: {player.attack[0]}")
                input("Continue: ")
                if player.health[0] <= 0:
                    return False
                elif enemy.health[0] <= 0:
                    return True
                
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
                elif player.health[0] <= 0:
                    return False
                
    def __start__fight__(self, __enemy__, __player__):
        if self.__fight__(__enemy__, __player__):
            print("Player won!")
            input()
            return True
        else:
            print("Player lost...")
            input()
            return False
    
    def __set__story(self, act):
        clear_scr()
        for stories in story.dungeon().acts[act]:
            print(stories, end=" ")
            input()
            
    def __up__level(self):
        database.database.account[self.who_user].character.attack[0]+=10
        database.database.account[self.who_user].character.defense[0]+=15
        database.database.account[self.who_user].character.health[0]+=20
    
    def __ui__(self):
        clear_scr()
        self.Not_dead = True
        while self.Not_dead:
            clear_scr()
            selector = input("Welcome to WORDCRAFT!\n(p) play\n(q) quit\n:")
            if selector == "q":
                clear_scr()
                print("Thanks for playing!")
                return
            elif selector != "p":
                continue
            while True:
                clear_scr()
                selector = input("Modes:\n(d) dungeon\n(b) back\n:")
                if selector == "b":
                    break
                elif selector != "d":
                    continue
                
                self.__set__story(0)
                self.__start__fight__(character.dragon, database.database.account[self.who_user].character)
                database.database.account[self.who_user].character.health[0] = database.database.account[self.who_user].character.initialHealth
                
                self.__set__story(1)
                if not self.__start__fight__(character.skeleton, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                self.__set__story(2)
                if not self.__start__fight__(character.zombie, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                self.__set__story(3)
                if not self.__start__fight__(character.slime, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                self.__set__story(4)
                if not self.__start__fight__(character.lizardman, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                self.__set__story(5)
                if not self.__start__fight__(character.Lamp, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                character.zombie.health[0] = character.zombie.initialHealth
                self.__set__story(6)
                if not self.__start__fight__(character.zombie, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                character.lizardman.health[0] = character.lizardman.initialHealth
                self.__set__story(7)
                if not self.__start__fight__(character.lizardman, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                self.__set__story(8)
                if not self.__start__fight__(character.Bed, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    break
                self.__up__level()
                
                self.__set__story(9)
                if not self.__start__fight__(character.dragon, database.database.account[self.who_user].character):
                    self.Not_dead = False
                    clear_scr()
                    print(f"You cannot continue this journey forward... The dragon is beyond you.")
                    input()
                    break
                
                
                
        clear_scr()
        play_again = input(f"Do you want to play again(p) or quit(q)? ")   
        if play_again == 'p':
            self.character_selection()
            self.__ui__()
        else:
            clear_scr()
            print(f"Thanks for playing!")
            return   
    
version_1 = play()
if version_1.__log__():# end of log in point, continuing to character creation
     version_1.character_selection()# start of character creation
     version_1.__ui__()# start of UI
else:
    print("Player quit...")
    
