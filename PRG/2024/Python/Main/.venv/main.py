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
#------------------------------------------------------------------------------------
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
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
