
class character:
    def __init__(self, race="Human", level=1, character_name=None, character_type=None, status="Alive"):
       self.attack = 3 * (level * 2.25) 
       self.defense = 2.5 * (level * 2.25)
       self.health = 4 * (level * 2.25) 
       self.race =  race
       self.level = level
       self.character_name = character_name
       self.character_type = character_type
       self.status = status
       
       match character_name:
           case "Barbarian":
               self.attack += 20
           case "Priest":
               self.health += 50
           case "Robin":
               self.attack += 5
               self.defense += 10
           case "Berserker":
               self.attack += 5
               self.defense += 5
               self.health += 5
       
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
        user_enemy.health -= user.attack / (user_enemy.defense/100)
        if user_enemy.character_type == "Boss" and user_enemy.health <= 0:
            user.level+=10
            user_enemy.status = "Dead"
        elif user_enemy.health <= 0:
            user.level+=1
            user_enemy.status = "Dead"
            
    def defend_self(self, user, user_enemy):
        user.defense += (user.defense * 1/4)
        character.atk(user, user_enemy)
        user.defense -= (user.defense * 1/4)
                
    #enemy actions
    def atk_player(self, user, user_enemy):
        user.health -= user_enemy.attack / (user.defense/100)
        if user.health <= 0:
            user.status = "Dead"
            
    def defend_enemy(self, user, user_enemy):
        user_enemy.defense += (user_enemy.defense * 1/4)
        character.atk_player(user, user_enemy)
        user_enemy.defense -= (user_enemy.defense * 1/4)
        

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
