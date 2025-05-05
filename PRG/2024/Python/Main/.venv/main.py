##------------------------------------------------------------------------------------
#   Print statement:
#       Syntax:
#           print()/print(""+variable) - normal strings
#           print(f"") - f-strings
#       
#       The f-strings or formated string literals are used to reference
#   values from variables. It is written in a normal print statement, 
#   following an f or F character and then quotation marks. To reference
#   a variable inside the quotation mark, we need double braces and then
#   reference.
#
#       Syntax:  
#           print(f"your name is {name}")
#
#       The print function has multiple parameters also, you can append
#   or concatenate strings with the colon like print("Hello", "World"),
#   or parameters such as sep or separate, end, file, and flush. The sep
#   parameter makes the concatenated strings separated with whatever you
#   want to separate them, like say a dash. The end parameter appends the
#   last string of your print statement, and as default they are the new 
#   line escape sequence. The flush parameter is used to flush buffers or 
#   print them immediately to the terminal. These buffers are stacked if
#   conditions are not met like program extermination, buffer is full, 
#   newline encounters, and etc. And then the file parameter which is the   
#   same as C's file variable which includes append, write, and read, 
#   although Python has more file manipulation like a+ and so on.
#
#       Syntax:       
#           print(f"", sep="", end="", file="", flush=False/True)
#
#       To read, append, or write files you can use the with keyword, 
#   followed by the open which has two parameters: file path, flags. And
#   then this open is followed by the variable name and then a colon to
#   indicate what you are going to do with it, like say use the file parameter.
#   
#       Syntax:
#   
#           with open(file_path, flag) variable_name:
#               print(example_here, file=variable_name)
#
#   
#
#   
#
#   
#
#   
#
# ------------------------------------------------------------------------------------
#   Variables:
#       These are containers for values.       
#
#       There are currently four variables, int, float, boolean, and string or char.
#   These variables can be initialized without declaring their data types like in java.
#   To initialize a variable, logic is needed. For ints, there should be whole numbers 
#   only, for floats there should be decimals, for strings there should be quotation 
#   marks, and for boolean there should be True or False.
#
#       integer = 123
#       float = 3.14
#       string = "This is a string"
#       char = 'a'
#       boolean = True/False
#
#
#------------------------------------------------------------------------------------
#   Typecasting
#
#       Typecasting is done to convert data types to other data types. In Python, it
#   simply done with data_type(var), as opposed to java's wherein you have to use the
#   parsing method.
#
#       Syntax:
#           bool()
#           int()
#           float()
#           str()
#
#
#------------------------------------------------------------------------------------
#
#   User Input
#   
#       User input is where users can input values through the CLI. The return value 
#   of this is always a string.
#       
#       Syntax:
#           input()
#
#
#------------------------------------------------------------------------------------
#
#   Math Methods and Arithmethic
#
#       The arithmetic in Python are the usual, but it doesn't have increment and 
#   decrement like C and Java does, and it just has the Augmented assignment operator.
#
#       Syntax:
#           += add
#           -= minus
#           *= multiply
#           /= divide
#           **= exponential
#           %= modulus
#           / / - floor division, rounds down the result to a whole number
#           
#       Functions that doesn't need the math library:
#           round()
#           abs()
#           pow()
#           max()
#           min()
#
#       Functions that need the math library:
#           This are referenced by using the math class and the dot operator
#           to access its members.
#           math.pi - pi constant
#           math.e - eulers constant
#           math.sqrt() - square root
#           math.ceil() - round up
#           math.floor() - round down
#   
#
#------------------------------------------------------------------------------------
#   
#   Conditional Operators, Identity Object Comparizon, and None or Null
#
#       The conditional operators are sligthly changes from how Java does it with symbols.
#   In Python, keywords are implemented making them redable. The use of this conditional
#   operators are to evaluate expressions and conditions. 
#
#       Syntax:
#           or - one condition must be true
#           and - all conditions must be true
#           not - reverses a condition
#
#       The Identity Object Comparizon or the "is" keyword compares the object memory 
#   locations of variables and returns either true if they both share the same memory 
#   or false if not. For example, Python often reuses memory such as values like 12.
#   The value 12 are intered, meaning that Python reuses this for other variable 
#   assignment. Although Python's Integer Interning only works within small integers, 
#   typically with -5 to 256.
#
#       Syntax:
#           is - object memory comparizon
#
#       The None keyword in python is the equivalent of null in other languages like Java 
#   and C. They represent a non-existent value or no value.
#
#       Syntax:
#           None - no value
#
#
#------------------------------------------------------------------------------------
#
#   Condional Statements && Condional Expressions
#
#       Conditional statements are statements that evaluates is a condition is true or
#   false, and if true that condition will be executed and the rest will be ignored. 
#   The syntax of these similar to Java and C but Python's else if is different and it 
#   doesn't have a switch statement. And to make up for that, Python's switch statement
#   can be implemented using a dictionary or match, and that these is more powerful than
#   the switch statement of other languages because of Python's dynamic variable 
#   assignment.
#
#       Syntax:
#       - If statements
#           if condition/(condition):
#           elif condition/(condition):
#           else:
#
#       - Switch statement alternatives
#           match method:
#               match var:
#                   case value:
#                   case _:
#       
#           dictionary method:
#               ----
#       The case _ is the default statement in which if none of the cases are executed
#   then it will execute itself; also synonymous with else.
#       
# 
#       Conditional Expression is the shortcut for the if-else statement, and it is like
#   the ternary operator of many languages. 
#           
#       Syntax:
#           return if condition else return        
#
#
#
#
#------------------------------------------------------------------------------------
#   String Methods
#
#       String methods are methods that are called when using the dot operator. It is 
#   very similar to Java's string methods and C's. There is one thing that is the most
#   useful in here, which is not a method of string, and rather a method only. And it
#   is the len method, equivalent to Java's length and size methods.
#
#       Syntax:
#           len(var) - returns a size, not limited to strings 
#           find("") - returns the index of the first location, otherwise -1
#           rfind("") - returns the index of the last location, otherwise -1
#           capitalize(var) - capitalizes the first letter
#           upper(var) - makes all the strings uppercase
#           lower(var) - makes all the strings lowercase
#           isdigit(var) - returns true if the string is all numerics
#           isalpha(var) - returns true if the string is all alphabets
#           count("") - returns the count
#           replace(to_be_replaced, change) - replaces the string
#
#       The help method can also help too for reference of all the methods of a data
#   type.
#       Syntax:
#           help(type) - reference all the methods 
#
#
#
#------------------------------------------------------------------------------------
#
#   String Indexing
#       String indexing is how we reference the string of their individual characters.
#   To index a string, we need to use the index operator, []. It has three parameters,
#   start which is the start of the string that you want, end which is the end of the 
#   string that you want, and step in which a conditional decrement or increment to
#   "step" or reference only those divisible by the step.
#
#       Syntax:
#           [start : end : step]
#           
#           sample_string[0] - the index 0 will be referenced
#           sample_string[0:] - the index 0 up to the end will be referenced,
#                               (Python automatically assumes the end of the string)
#           sample_string[0:len(sample_string):2] - all divisible by 2 in index, including
#                                                   the start of the string, is referenced
#           sample_string[::-1] - reverse string reference
#   
#       The end and step has an interesting concept. The start is inclusive, in which 
#   it includes the index of which it will print. Now the end is exlusive, meaning that
#   it will exclude to reference the index in the argument, making it the end point. And
#   if we want to reverse reference the string, we assign a negative number to the step
#   because if we actually think of it logically, step is just an iterative incrementation
#   of indexing. For example, [::-2], the 0-based index rule will tell us that for every
#   value divisible by -2, which is -2+-2+-2..., it will be referenced. Meaning, if the
#   standard argument for referencing the string is this,
#
#                      [0 : len(str) : 1] = 1+1+1... index referencing
#   Then the reverse is this,
#                      [len(str)-1 : 0 : -1] = -1+-1+-1... index referencing
#
#
#
#
#
#------------------------------------------------------------------------------------
#
#   Format Specifiers
#
#       Format specifiers are done with f-string or formatted string literals. It has 
#   two parameters, value : flags. The flags is almost the same as Java, and they are 
#   used to format the value.
#
#       Syntax flags:
#           :.f - Same as C, wherein you indicate the precision of the float 
#           :0 - Same as Java, wherein you indicate zeros before the value
#           :, - Thousandth place indicator
#           :+ - Indicates if a value is negative or positive
#           :space/" " - Removes the positive sign, same as + flag
#           :> - left allign
#           :< - right allign
#           :^ - center allign
#           :number - add spaces
#
#       We can actually combine the different flags, and this is called mix-match.
#
#
#------------------------------------------------------------------------------------
#
#   
#   Loops
#
#       Python has a simple syntax for the while loop and the for loop, of which the 
#   while is still an iteration until the condition is not true, and a for loop is still
#   used to iterate a fixed number of times. The for loop in Python can be implemented
#   using three different ways; the range function, which has the same parameters as the
#   index operator although if the argument is only one then it will be considered as the 
#   end which is exclusive or >len-1. The others are iterable objects such as strings and
#   sequences or collections.
#
#       Syntax:
#           for i in range(start, end, step):
#           for i in reversed(range(start, end, step)):
#           for i in string:
#           for i in collection:
#       
#           while (condition is true):
#
#       You can also have,
#           for i, j in list:
#               print(i, j)
#
#       Wherein rather than only scanning 1 value with one counter, i, you will have 
#       multiple counters, in here two, but this will only works in 2d collections
#       and if you have only the number of counters in each collections in that
#       collection.
#
#
# ------------------------------------------------------------------------------------
#
#   Colletions 
#       
#       Collections are data structures or variables that can store multiple data types.
#   Python's collection can actually store difference data types in comparizon to Java's
#   and C's arrays and arraylist. 
#
#       List is one of the type of collections in Python that is mutable by itself and
#   its elements and then are ordered, meaning it will not change during or after runtime.
#   Lists can also handle duplicate elements. It can be accessed with the index operator.
#       Set is unordered or random and its elements are immutable, meaning it will not be 
#   changed after assignment, but the set itself is mutable. This means that you can add 
#   values to the set but not change its value. It will also not handle duplicates. You
#   can also type cast into set in scenarios such as an empty {}. This is by default a
#   dictionary, and so you might want to type cast it into a set, name = set({}), if
#   you want an empty set.
#       Tuple is an ordered collection but itself immutable, unlike sets, but its values
#   are mutable and that means you can use the index operator to access its elements. 
#   You cannot add elements to a tuple once it is initialized, and this is why its  
#   immutable. It has a fixed size like arrays in Java and C. But you can add mutable and
#   immutable values to it, making it dynamic as you can add values to those collections
#   while being in the tuple. 
#
#       Syntax:
#           list = []
#           set = {}
#           tuple = (), although indicated by ","
#
#           or
#
#       Typecast Methods
#           list = list()
#           set = set()
#           tuple = tuple()
#
#
#
# ------------------------------------------------------------------------------------
#
#   Class, functions, self, cls, args, kwargs
#
#       Classes contains members such as attributes and method. To access this methods
#       require either the cls, self, or an object.
#
#       Class-level attributes - These are variables that is initialized in the class,
#       outside of any functions, and shared among all instances variable, and this is  
#       the same with the static variables in Java.
#
#       Local Variable - Variables inside functions and cannot be accessed outside
#
#       Global Variable - Just like in C, where it is outside of functions and classes
#
#       Instance Variables - This are variables that belong to the object itself only;
#       these are non-static Java variables; and this is initialized using self inside
#       functions.
#
#       Function Call inside Functions - This can be done using self's dot operator,
# 
#           class test:
#               def show(self):
#                   self.var = 0
#               def access(self):
#                   self.show()
#       Accessing Instance Variables - This can be done by calling the function first,
#       as functions cannot see each other,
#
#           class test:
#               def show(self):
#                   self.var = 0
#               def access(self):
#                   self.show()
#                   print(self.var)
#
#       Class Method - This references class-level variables using @classmethod and cls, 
#       equivalent to self but for class-level variables
#
#           class test:
#               access_this = 1
#
#               @classmethod
#               def show(cls):
#                   print(cls.access_this)
#               
#       __init__ - This is the constructor of a class,
#               
#           class construct:
#               def __init__(self, val1, val2):
#                   self.val1 = val1
#
#       Overloading - There are no overloads in Python, but what we can do is initialize 
#       the variables in the parameter so that even if the user does not provide arguments
#       or the formal parameters it will still have value
#
#           class construct:
#               def __init__(self, val1=None, val2=None):
#                   self.val1 = val1
#               
#           object = construct() 
#           object2 = construct(1, 2)
#
#       *args - This are tuples as actual parameters in a function
#       **kwargs - This are dictionaries as actual parameters in a function        
#
# ------------------------------------------------------------------------------------
#
#   Membership Operators
#
#       in - used for a lot of things but generally through iteration or finding a value 
#   in a sequence. It iterates into an entire collection and scans or assigns, or both. 
#   The scan also has a term membership test wherein you can use either a loop or not 
#   iterative, like
#
#       for val in values (iterative)
#           or
#       if val in values (non-iterative)
#           and
#       if name not in names    
#
#
#

# ------------------------------------------------------------------------------------
#
#   Dictionary
#
#       A dictionary is a key value pair, defined as {key:value}, wherein the only way
#   for you to get the values is to reference their keys first. This is changeable and
#   ordered, but cannot have duplicates as keys are just like functions wherein one 
#   input returns one ouput.
#
#       Syntax:
#           dict = {1:2, "Kali":"Linux", 1.2:23.1, key:list()}
#
#   In here, you can assign any values to the keys. Also, if a key doesn't exit, the
#   get function or how you get the values through passing they key, it returns None.
#
#       Methods:
#           get(key) - References the value
#           update({key:value}) - Change (set in java) or Append (add/push) values
#           pop(key) - Removes a value
#           popitems() - Pops a value, LIFO
#           items() -  This returns a dictionary through a tuple with the keys inside, 
#                     individually stored in lists
#           values() - Returns a dictionary through a tuple with values inside, 
#                      individually stored in lists
#           keys() - Returns a dictionary through a tuple with keys inside, individually
#                    stored in lists
#           clear() - Clears a dictionary
#
#
# ------------------------------------------------------------------------------------
#   Random  
#       This generates random values specified by the methods used. And this can be 
#   accessed through importing the random library.
#
#       Syntax & Functions:
#           import random
#           
#           .random() - Generates a floating-point number between 0-1
#           .randint(start, end) - Both start and end are inclusive, generates a number 
#                                  between those values
#           .choice(sequence) - Generates output based on a collection or sequence
#           .shuffle(sequence) - Shuffles the collection
#
# ------------------------------------------------------------------------------------
#   Default Arguments
#
#       This is a predefined value for parameters so that it reduces the amount of
#   arguments to be inputted. 
#
#       def func(end, start=0):
#       func(20)
#
#       This functions assumes the every count will start at 0, making the argument
#   less. But the user can also give value to the start,
#
#       func(20, 1)
#
#       Also, it is advisable to always have the non-default arguments or positional
#   arguments to be in the first parameters followed by the default.
#
#
# ------------------------------------------------------------------------------------
#   Keyword Arguments
#
#       This is an argument preceeded by an identifier or a parameter's variable to
#   specify where the value should go. And this makes having arguments in a function
#   to not be ordered or positional. Although there is a rule that if an argument
#   is positional, then it must be before the keyword arguments.
#
#       def func(year, date, day):
#
#       func(2006, day=10, date=02)
#
#   We can also see keyword arguments with the print statement,
#
#       print("Hellow", "Worlds", end=" "), with end being the keyword argument in
#   place of the default argument end="\n" 
#
#
#
# ------------------------------------------------------------------------------------
#   Arbitrary Arguments
#
#   * is an unpacking operator that packs arguments into their corresponding parameter
#   like args or kwargs
#
#   *args - arguments, allows for passing non-keyword arguments into a tuple
#   **kwargs - keyword arguments, allows for passing keyword arguments into a dictionary
#
#       def func(*args):
#       def func(**kwargs):
#
#       You can also change the names for args and kwargs as the unpacking operator is the
#   most important piece for passing multiple arguments if a user does not know how many
#   arguments there will be.
#
#       def func(*name):
#       def func(**age):
#
#       In kwargs, every identifier or assignment is a string like,
#
#           def func(**kwargs):
#               print(kwargs.get('key'))
#
#
# ------------------------------------------------------------------------------------
#   Iterables
#
#       This is an object or collection that can return its element one at a time, 
#   assuming that they have two or more elements, making them usable for loops.
#
#
#
# ------------------------------------------------------------------------------------
#
#   ord
#
#       The ord method can returns Unicode, but can be ASCII if its within 0-127. It
#   accepts only characters and not string.
#
#       ord('a) - returns 97
#       
#   "".join
#
#       The join method is a method from the string object, and this is synomous with
#   concatenate but can concatenate or join strings from collections or objects rather
#   than just two strings with cat.
#
#       "".join(iterable)
#
#
# ------------------------------------------------------------------------------------
#   List Comprehension
#
#       This is a concise way to write lists using the for loop, membership operator,
#   condional statements or expressions, and ternary expression. There is also a structure
#   to write this,
#       
#       non-ternary,
#           [expression for value in iterable if condition]
#           [expression for value in iterable]
#
#       ternary expression,
#           [expression if condition else expression for value in iterable]
#
#       Here the expression is the value itself but can be manipulated and thus called 
#   the expression. It is optional to write expressions and conditions. And generally this
#   is used to create lists or have an existing list to filter with the use of conditions
#   and expressions.
#
#
# ------------------------------------------------------------------------------------
#   Module
#
#       This is a file containing codes. It is what inside libraries. And there are three
#   ways to write it; import module to reference everything in that module, import module 
#   as nickname for referencing the with the nickname for saving space or making code   #   readable, and from module import specific_code, and this specific code can be  
#   variables or constants or fields or attributes, methods, and classes. This specific 
#   code is then referenced without referencing the module itself as we did with the 
#   first two import statements. 
#
#       Syntax:
#           import module
#           import module as alias
#           from module import attribute/class/method
#
#
# ------------------------------------------------------------------------------------
#   Variable Scope and Scope Resolution
#
#       Variable scope is where a variable is visible and accessible. And scope resolution
#   is Python's way of using variables inside functions and has an order of use, LEGB, 
#   such as local, enclosed, global, and built-in. It says that if a local variable is not
#   found, then it will go to enclosed or if a nested function does not have its local 
#   variable then it will look for the enclosed or the parent function's variable, and in 
#   which case the local variable of that function. And now if these two are gone, then it
#   will look for the global variable, or the variable outside of any class and function.
#   And if that is gone, then it will look for the built-in variable found from the "from
#   import" statement, in which we do not need to reference a module and access it's 
#   attributes or methods with the dot operator.
#
#       LEGB : local -> enclosed -> global -> built-in
#           
#
# ------------------------------------------------------------------------------------
#
#   main method and if __name__ == '__main__'
#
#   The main is where all the functions and attributes are executed, just like in C.
#   In python, this main method is not necessarily executed, but it is good practice
#   to have this and to this to be the only one executed when using the from-import
#   of modules. This is because the from-import actually executes everything in a python
#   file and integrates it, so if you have any code that outside of any class and 
#   function, that will be executed and become unnecessary. So in this case, we can
#   have a main function to put every executions that we want, and call it if we run
#   the actual module itself with the if dunder name dunder is equal to the string of
#   dunder main dunder. The dunder is a double underscore, "__". The __name__ returns
#   your module, so if you run the module with that, then it will return main, but if
#   you run it from a separate module, that is per say that you want to know the __name__
#   of the other module and with from-import, then it will return the name of that module
#   rather than the __main__ as we're not executing it from its module itself.
#
#       syntax:
#           def main():
#               #code here
#
#           if __name__ == '__name__':
#               main() 
#    The purpose of the if statement is to run the main when it runs the module.
#
#
#
# ------------------------------------------------------------------------------------
#
#   MUST DO!
# 
#   def main()
#
#       Having this, as in any other languages like Java or C, will make you code to
#   be as readable as possible. This is where all your functions and variables will run 
#   and be, and then calling this to the if __name__...
#   
#   Type Annotation | Type Hint
#
#       These are used to explicitly define what a placeholder's data type will be as
#   variables in Python are dynamic and can hold any data types. 
#
#       -> used in functions: def func() -> None
#           This defines what the function will return
#
#       : used in normal variables: number: int = 0
#           This defines the data type of a variable
#
#       [] used in collections: numbers:list[int] = [0]
#           This defines the data type of a collection
#
#
# ------------------------------------------------------------------------------------
#
#   Ellipsis or ...
#
#   This is used as kind of like a pass and specify what column there is in Numpy
#
#       def func():
#           ...
#
#       name = ...
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
