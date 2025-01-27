class person:
    access_this = 266 #THIS IS A STATIC VARIABLE/ATTRIBUTE! IT IS SHARED AMONG ALL INSTANCES WTF
    
    def if_existing(self, value):
        self.value = 255
        return self.value
    
    @classmethod
    def if_not(cls):
        print(cls.access_this)
        
class book:
    def __init__(self, value):#FOR CONSTRUCTOR AND NON-STATIC OR SHARED CLASS ATTRIBUTES
        self.value = value
    
obj1 = person
obj1.access_this = 2
print(obj1.access_this)

obj2 = person
print(obj2.access_this)

obj3 = book(255)
print(obj3.value)

obj4 = book(265)
