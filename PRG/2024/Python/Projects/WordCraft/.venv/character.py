import story

class character:
    def __init__(self, race="Human", level=1, character_name=None, character_type=None, status="Alive"):
       self.level = [level]
       self.attack = [3 * (self.level[0] * 2.25)] 
       self.defense = [10 * (self.level[0] * 2.25)]
       self.health = [20 * (self.level[0] * 2.25)]
       self.initialHealth = self.health[0] 
       self.race =  race
       self.character_name = character_name
       self.character_type = character_type
       self.status = status
       
       match character_name:
           case "Barbarian":
               self.attack[0] += 60
           case "Priest":
               self.health[0] += 60
           case "Robin":
               self.attack[0] += 5
               self.defense[0] += 60
           case "Berserker":
               self.attack[0] += 30
               self.defense[0] += 5
               self.health[0] += 30
       
       self.stats = [
           self.attack,
           self.defense,
           self.defense,
           self.race,
           self.level,
           self.character_name,
           self.character_type,
           self.status
       ]
        
       
    # player actions
    def atk_enemy(self, user, user_enemy):
        user_enemy.health[0] -= (user.attack[0] - (user_enemy.defense[0]/10))
        if user_enemy.character_type == "Boss" and user_enemy.health[0] <= 0:
            user_enemy.status = "Dead"
            user.health[0] = user.initialHealth
        elif user_enemy.health[0] <= 0:
            user_enemy.status = "Dead"
            user.health[0] = user.initialHealth
            
    def defend_self(self, user, user_enemy):
        user.defense[0] += (user.defense[0] * 1/4)
        character.atk_player(self, user, user_enemy)
        user.defense[0] -= (user.defense[0] * 1/4)
                
    #enemy actions
    def atk_player(self, user, user_enemy):
        user.health[0] -= (user_enemy.attack[0] - (user.defense[0]/10))
        if user.health[0] <= 0:
            user.status = "Dead"
            
    def defend_enemy(self, user, user_enemy):
        initial = user_enemy.defense[0] * 1/4
        user_enemy.defense[0] += (user_enemy.defense[0] * 1/4)
        character.atk_enemy(self, user, user_enemy)
        user_enemy.defense[0] -= initial
        

# player character creation models
Barbarian = character("Human", 1, "Barbarian")
Priest = character("Human", 1, "Priest")
Robin = character("Human", 1, "Robin")
Berserker = character("Human", 1, "Berserker")

#mobs
skeleton = character("Undead", 1, "Skeleton", "Mob")
zombie = character("Undead", 2, "Zombie", "Mob")
slime = character("Liquid", 3, "Slime", "Mobs") 
lizardman = character("Lizard", 4, "Lizardman", "Mob")
merman = character("Fish", 5, "Merman", "Mob")

#bosses
Lamp = character("Everyday-Object", 6, "Lamp", "Boss")
Bed = character("Everyday-Object", 7, "Bed", "Boss")
dragon = character("Lizard", 500, "Dragon", "Boss")


print(story.dungeon().act_1[0])