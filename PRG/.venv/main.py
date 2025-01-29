class user:
    g = 0
class character:
    def __init__(self, character_name=None, attack=None, defense=None, health=None, race=None, level = None):
        self.attack = attack
        self.defence = defense
        self.health = health
        self.race = race
        self.character_name = character_name
        self.level = level
class database:
    account = ([], [])
    
    def __init__(self):
        her = [
            "There was this school where we met and a pier where we had to say good bye.",
            "Below the pier was an ocean, full of water for as long as the eye can see.",
            "Inside this school's room, there was this seat before me.",
            "The pier is wooden and a short bridge.",
            "Before this seat, there was this woman. She's not particularly pretty and she was silent. The teacher had something to do with her. And it was to question her classmates about life",
            "Below the pier was a container. And there she was.",
            "I feel as though she is not there... Should I go to the horizon instead, I asked myself. But I cannot seem to find any boats; then I should just build one!",
            "My life is for hers!"
        ]

database.account[0].append("Admin@gmail.com")
database.account[1].append("Admin123")

#mobs
skeleton = character(1, 5, 30, "Skeleton")
zombie = character(5, 10, 60, "Zombie")
slime = character(20, 50, 100, "Slime") 
lizardman = character(60, 150, 50, "Lizardman")
merman = character(100, 200, 150, "Merman")

#bosses
dragon = character(2000, 5000, 10000, "Dragon")
big_black_snake = character(1000, 2500, 3000, "Big Black Snake")

