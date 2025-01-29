class person:
    access_this = 266 #THIS IS A STATIC VARIABLE/ATTRIBUTE! IT IS SHARED AMONG ALL INSTANCES WTF
    
    def if_existing(self, value):#self is used to initialize and access the attributes and methods of instances. Super() or super method is used to access the methods of the parent class. And to access the attributes created by the self, one must first call the function it belongs to and then access it, except for constructors as they are already called when an instance is created.
        self.value = 255
        value = 255
        return self.value
    
    @classmethod
    def if_not(cls):
        print(cls.access_this)
        
class book:
    def __init__(self, value):#FOR CONSTRUCTOR AND NON-STATIC OR SHARED CLASS ATTRIBUTES
        self.value = value

    def __init_2__(self, book=None, optional=None, *args, **kwargs):#Overloading method, although Python does not actually support overloading methods. *args for numerical, and **kwargs for keyword arguments. Args are tupples, and kwargs are dictionaries
        self.book = book
        self.optional = optional
        self.books = None
    
        
    
obj1 = person
obj1.access_this = 2
print(obj1.access_this)

obj2 = person
print(obj2.access_this)

obj3 = book(255)
print(obj3.value)

obj4 = book(265)
print(obj4.value)

obj5 = book(255)
print(obj5.optional)