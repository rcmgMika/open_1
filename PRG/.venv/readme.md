# World Craft

World craft is an rpg word game wherein characters slay monsters inside a dungeon, have skills, and can be brought. This game has a shop where users can buy items, characters, and potions. Boss fights are unavoidable while mob fights are not.

## Algorithm
### log in
- Prompt user for log-in or sign-in
    - if log-in, prompt user for valid username and password
    - if sign-up, prompt user for non-existing username and password
        - If username or password is already existing, tell user user or password is already existing; prompt again for non-existing username and password
<hr>

### Character Creation
- Prompt user for character name
- Prompt user for character type: Barbarian, Priest, Robin, Berserker
<hr>

### UI

- Prompt user options: Play, Buy, Quit and Log Out
    - If Play, prompt user this options: Dungeon, back
        - If Dungeon, display warning: "Dungeon bosses are unavoidable while mob fights are not. Please venture with caution!"; then prompt user if continue or back.
            - If Continue, (adventure-loop) display adventure travels like "You wander to a forest."; then prompt options: Travel Further
                - If Travel Further, display adventure travels like "You wander a mob"
                - If there is a mob, display options: Run(travel further), Fight
                    - If Fight, display fight module
                    - If Run, travel further
                - If there is a boss, display boss cutscene dialogue, prompt user: Fight.   
            - If Back, go back to #if play, prompt user this options: Dungeon
        - If Back, go back to #user options

<hr>

### Fight module

- Display enemy and self's health bar
    - Compare enemy and self's level
        - if enemy's level is greater than self, enemy attacks first
            - randomize enemy pattern: attack, defend
        - otherwise, self will attack first
            - self will choose: attack, defend
<hr>

## Pseudocode

```python
# database.py
class database:
    account = ([admin, user])
    mobs = {mobs}   #to be randomized

class user:
    
    def __init__(self, user, password):
        self.user = user
        self.password = password
        database.account.add(user)

    character instance(race: Barbarian, Priest, Robin, Berserker)


# config.py
class character extends user:
    def __init__(self, attack_val, defense_val, health_val, race, level, character_name, alive):
        self.attack = 3 * (defense_val * 2.25)
        self.defense = 2.5 * (defense_val * 2.25)
        self.health = 4 * (defense_val * 2.25)
        self.all = [all parameters]
    
    def attack(self, user, user_enemy):
        user_enemy.health -= user.attack / (user_enemy.defense_val/100)
        user_level+=1 if user_enemy.health <= 0

    def defend(self, user, user_enemy):
        user.defense_value += (user.defense_value * 1/4)
        attack(user, user_enemy)
        user.defense_value -= (user.defense_val * 1/4)


#   story.py
class dungeon:
    def story_1():
        act_1 = []


```
