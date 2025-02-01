
class character:
    def __init__(self, race="Human", level=1, character_name=None, character_type=None, status="Alive"):
       self.attack = [3 * (level * 2.25)] 
       self.defense = [10 * (level * 2.25)]
       self.health = [20 * (level * 2.25)] 
       self.race =  race
       self.level = [level]
       self.character_name = character_name
       self.character_type = character_type
       self.status = status
       
       match character_name:
           case "Barbarian":
               self.attack[0] += 20
           case "Priest":
               self.health[0] += 50
           case "Robin":
               self.attack[0] += 5
               self.defense[0] += 10
           case "Berserker":
               self.attack[0] += 5
               self.defense[0] += 5
               self.health[0] += 5
       
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
            user.level[0]+=10
            user_enemy.status = "Dead"
        elif user_enemy.health[0] <= 0:
            user.level[0]+=1
            user_enemy.status = "Dead"
            
    def defend_self(self, user, user_enemy):
        user.defense[0] += (user.defense[0] * 1/4)
        character.atk(self, user, user_enemy)
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
skeleton = character("Undead", 5, "Skeleton", "Mob")
zombie = character("Undead", 10, "Zombie", "Mob")
slime = character("Liquid", 50, "Slime", "Mobs") 
lizardman = character("Lizard", 150, "Lizardman", "Mob")
merman = character("Fish", 200, "Merman", "Mob")

#bosses
Lamp = character("Everyday-Object", 212, "Lamp", "Boss")
Bed = character("Everyday-Object", 260, "Bed", "Boss")
dragon = character("Lizard", 500, "Dragon", "Boss")

