class database:
    account = list()
    mobs = set()

class user:
    def __init__(self, username=None, password=None): #no character yet
        self.username = username
        self.password = password
        self.character = None
        database.account.append(self)
        
    def auth(username, password):
        right_pass = False; right_user = False
        for i in range(len(database.account)):
            if right_pass == True and right_user == True:
                break
            if username == database.account[i].username:
                right_user = True
            if password == database.account[i].password:
                right_pass = True    
        return True if right_pass == True and right_user == True else False
        
    def current_user(username, password):
        right_pass = False; right_user = False
        for i in range(len(database.account)):
            if username == database.account[i].username:
                right_user = True
            if password == database.account[i].password:
                right_pass = True 
            if right_pass == True and right_user == True:
                return i   
admin = user("admin", "admin123")



    


