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
#       
#           dictionary method:
#               ----
#
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
