class database:
    account = list()
    mobs = set()

class user:
    test = 12
    def __init__(self, username=None, password=None, character=None): #no character yet
        self.username = username
        self.password = password
        self.character = character
        database.account.append(self)
        
        
admin = user("admin", "admin123")


