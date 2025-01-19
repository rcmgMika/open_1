public class Untitled1{
    public static void main(String[] args){
        
//---------------------------------------------------------------------------------------------------------------------------------------------
        //PRINT
        System.out.print("Hello!");//print without newline
        System.out.println("\nWorld!");//print with newline
        System.out.print("\tLeo!");
//---------------------------------------------------------------------------------------------------------------------------------------------
        //DATA TYPES
        // In data types/variables, we have primitive and reference
            //primitive - Static values, meaning static data types has a limit to their memory allocation
        
        //true/false
        boolean a; // 1 byte = true or false
        byte b; // 1 byte = -128 - 127
        short c; // 2 bytes = -32,768 - 32,767
        //integers
        int d; // 4 bytes = -2 billion - 2 billion
        long e; // 8 bytes = -9 quintillion - 9 quintillion
        //decimals
        float f; // 4 bytes = fractional number up to 6-7 digits
        double g; // 8 bytes = fractional number up to 15
        //characters
        char h;// 2 bytes = single character
            //reference - Dynamic values, meaning reference data types don't have a limit to their memory allocation. They store
            //            addresses like arrays in C rather than data in primitives but they're slower than primitives
        //characters
        String i;//reference data types don't have specific byte allocation,
//---------------------------------------------------------------------------------------------------------------------------------------------
        //TYPE CASTING(not complete)
            /*
            -----Type Casting is a method of converting a data type into another-----
            *   There are two types of type casting: Primitive and Reference, and those have two types also
            *                   Implicit type cast(smallest -> biggest)
            *                                    &
            *                   Explicit type cast(biggest -> smallest)
            *
            * Primitive :
            *   Widening type cast(implicit / automatic) - There is no data lost as we convert the data type into lowest to biggest
            *   byte -> short -> int -> long -> float -> double
            *       int age = 10;
            *       float height = age+0.1f;
            *       long temp;
            *           System.out.print((temp = height)); You can actually perform this also in print statements
            *
            *
            *   Narrowing type cast(explicit / manual) - There is data lost as we are essentially removing a data by converting
            *                                            them into smaller data types
            *   double -> float -> long -> int -> short -> byte
            *       double age = 10.5;
            *       int _age = (int)age;
            *       byte __age;
            *           System.out.println((__age = (byte)_age)); You can actually perform this also in print statements
            *
            *   ----------------------------------------------------------------------------------------------
            *   Reference : (for objects)
            *
            *
            *   ---------------------------- Literal and Object ----------------------------------------------
            *   This is useful in type casting so you can specify if something will be an index or a direct value.
            *   Literal - Index/(not complete)
            *   OBject - Value
            *

            * */
//---------------------------------------------------------------------------------------------------------------------------------------------
        //FORMAT SPECIFIER/STRING CONCATENATION
        //There are no format specifiers in java, but rather string concatenation
                //syntax: +variable_name
        //and to print a variable, we don't include quotation marks
                //syntax: System.out.print(variable_name);

        System.out.println("\nMy age is "+(d=10));
        
        //in this print statement, I assigned a value to d in which it didn't have a value before. For this concept, by applying two parenthesis
        //into the variable after the sign '+', we can form operations/expressions in there
        System.out.println("My money is only "+(g=d+1.456));
//---------------------------------------------------------------------------------------------------------------------------------------------
        //ESCAPE SEQUENCES(not complete)
            //The escape sequences are also the same for Java and C
        // \n = newline
        // \t = tab
        // \ = printing reserved characters
//---------------------------------------------------------------------------------------------------------------------------------------------
        //LIBRARIES(not complete)
        /*
            libraries are a collection of functions
            In declaring a library in Java we start by the import function, and then the name of the library(i.e math), the package name
            (i.e utilities/util), and then the class(i.e Scanner)
                    Syntax: import library_name.package_name.class_name;

                List of Libraries
                    1. User Input - import java.util.Scanner;
                    2. GUI - import javax.swing.JOptionPane;
                    3. Stack - import java.util.Stack;
                    4. Random - import java.util.Random;
                    5. ArrayList - import java.util.ArrayList;
                    6. LinkedList - import java.util.LinkedList;
        */
//---------------------------------------------------------------------------------------------------------------------------------------------
        //USER INPUT
        /*
            The user input in Java is different in C language, in that there are many thigns to do and you need to initialize your scan function
            User inputs all have their own built in newline and they detect that newline as the end of the user input, but some don't detect it
            and causes an input buffer for inputting that newline into the next scanner

            in initializing the user input in java, we need to have the library and initialize the function

                Syntax:
                    libr = import.util.Scanner
                    main_func = Scanner scanner_name = new Scanner(System.in); (THIS IS CALLED OBJECT)
                    -- to call this function and have user input --
                            scanner_name.next_(type of user input)();
                    -- Method -- There are specifically made inputs in these scanners. So if a variable is int, you input int.
                            scanner_name.nextLine(); - strings(reads newline and accepts as end), includes whitespace(reads it)
                            scanner_name.next() - strings(reads newline and accepts as end), stops at whitespace(doesnt't read it)
                            scanner_name.next().charAt(index) - char, get a single character out of a string
                            scanner_name.nextInt(); - integers(doesn't read newline so it acts like %c in C lang so you'll have input buffer)
                            scanner_name.close(); - closes the scanner
                    -- in assigning a value to a dynamic variable --
                            variable_name = scanner_name.next_type();
                    -- in just referencing the scanner for prevent input buffer or just to have a user input --
                            scanner_name.next_type();

        */
//---------------------------------------------------------------------------------------------------------------------------------------------
        //Operands & Operations
            /*
                operands - values that are manipulated
                operations - symbols that manipulates operands (+ - * / %)
                expression - the mixture of operands and operation, although it does not have a result
            */
//---------------------------------------------------------------------------------------------------------------------------------------------
        // GUI, Graphical User Interface
                /*
                    In order to create a gui, we need the library JOptionPane, and it includes input dialog boxes, display dialogue
                    boxes, and many more. However, there are specifically made dialogue boxes for different inputs. And the 
                    showInputDialogue returns only strings. And so we can use the parse method.

                    Keywords:
                        parentcomponent: This sets up the coordinate of the said component or dialog box
                        dialog box: an interface wherein a user can interact

                    Parse - Changing string or any data types into another data type.
                        syntax:
                            int = Integer.parseInteger(variable);
                            double = Double.parseDouble(variable);
                            float = Float.parseDouble(variable);
                            ...

                    Now, onto the GUI
                        Libr - javax.swing.JOptionPane
                    There are a lot of objects in this library, but they all are called when,
                        syntax:
                            JOptionPane.(method)(parameter);
                        function syntax:
                            JOptionPane.showInputDialog(message); - this lets the user input something. You need to have a placeholder for this, although you can
                                                                    run it without
                            JOptionPane.showMessageDialog(parent_component, message); - this lets you output your messages. You don't need a placeholder for this
                            JOptionPane.showConfirmDialog(parent_component, message); - this lets you pick between yes, no, and cancel. Yes = 0, no = 1, cancel = 2.
                                                                                        This returns an integer so you should have an int placeholder.
                            JOptionPane.showOptionDialog(parent_componet,             - This lets you have options through your array. Same as confirm dialog
                                                         message,                       but with a lot of optiond
                                                         title,       - Title of the GUI
                                                    (int)optionType   - Types of option: [yes_no(0), yes_no_cancel(1), ok_cancel(2)]
                                                    (int)messageType  - Types of message icon [error(0), information(1), warning(2), question(3), plain(4)]
                                                         Icon         - (I don't know yet) 
                                                         ptions      - Options from the arrayO
                                                         initialValue - Standard option from the array to be chosen if user presses <enter>      
                            )
                                                                                    -----Return----
                                                                                    The return of this functions are actually simple. From the most left, it starts
                                                                                    at zero, and then to the most right as the last point. In which we can treat t-
                                                                                    his as an array that has it's element's indeces starts at zero.
                    Sample program:
                        import javax.swing.JOptionPane;

                        public class Main{
                            public static void main(String[] args){
                                String full_n; int age;
                                    full_n = JOptionPane.showInputDialog("What is your name ms/mr?");
                                    age = Integer.parseInt(JOptionPane.showInputDialog("What is your age?"));
                                        JOptionPane.showMessageDialog(null, "Welcome, "+full_n+", and your age is "+age+".");
                            }
                        }

                        ----------- Confirm Dialog ----------------
                        import javax.swing.JOptionPane;
                        public class Main{
                        public static void main(String[] args){
                            String full_n; int n;
                                JOptionPane.showMessageDialog(null, "Hello");
                                n = JOptionPane.showConfirmDialog(null, "Do you like chocolates?");
                                System.out.println(n);
                                    if(n == 0){
                                        JOptionPane.showMessageDialog(null, "I do too!");
                                    } else if (n == 1) {
                                        JOptionPane.showMessageDialog(null, "Well, you should.");
                                    }else{
                                        JOptionPane.showMessageDialog(null, "There is no cancel, dumbass.");
                                    }
                        }
                    }
	}
}
                */
//---------------------------------------------------------------------------------------------------------------------------------------------
    /*
     *  MATH FUNCTIONS
     *      Java has practically the same math functions just like c, however you don't need a library for this
     *
     *      Math is a reference type function so we have to capitalize and then the dot operator / member access operator
     *          Math.max(x, y) - gets the maximum value
     *          Math.min(x, y) - gets the minimum value
     *          Math.abs(x) - gets the absolute value
     *          Math.sqrt(x) - gets the square root of base 2
     *          Math.round(x) - rounder
     *          Math.ceil(x) - always round up
     *          Math.floor(x) - always round down
     *          Math.sin(x) - sine function
     *          Math.cos(x) - cosine function
     *          Math.tan(x) - tangent function
     *          ...
     *
     *     Also, when we have division in our variables, be sure to typecast them or include a decimal(can be .0) because the operands are integers.
     *
     *
     *
     *
     *
     *
     *
     *
     * */

//---------------------------------------------------------------------------------------------------------------------------------------------
    /* RANDOM NUMBERS
    *   Random numbers in java are dissimilar to C, in which it has an autonomous srand function with built in time function that
    *   will change upon null. Think of it as a combined srand and rand.
    *
    *   Library : import java.util.Random
    *       After importing the library, we need to create a name for the instance of the random class, think of it as the same
    *       method of creating a scanner and stack
    *   Syntax :
    *       Random random_name = new Random();
    *       -- for using --
    *           random_name.nextInt : for random integers
    *           random_name.nextBytes : for random bytes
    *           random_name.nextDouble : for random doubles
    *           random_name.nextFloat : for random floats
    *           random_name.nextBoolean : for random boolean
    *           ...
    *
    *
    * SAMPLE CODE : Random integer generator
    *
    *
    *        import java.util.Random;
                public class Main{
                    public static void main(String[] args){
                        Random rand = new Random();
                            int random = rand.nextInt();
                            int random2 = rand.nextInt(10)+1;//With a limiter value of 10(this sets the limit of the random, kinda
                        //like the modulus in C that sets the limit. And we also have + 1 because computers start at zero);
                            System.out.println(random);
                            System.out.println(random2);
                    }
            }
    *
    *
    *
    *
    *
    *
    *
    *
    *
    *
    *
    * */ 
    //-----------------------------------------CONTROL STRUCTURES------------------------------------------------------------------------------
        // Sequential - Pertains to the order of execution of code, from top to bottom, and code precedence(code that is executed first) 
//---------------------------------------------------------------------------------------------------------------------------------------------
        /* CONDITIONAL STATEMENTS - Control Structure
        *
        *   Relational / Comparisons operators
        *       : this operators compare if given values are either true or false
        *       == is equal to
        *       < less than
        *       > greater than
        *       <= less than or equal to
        *       >= greater than or equal to
        *       != not equal to, checks to see it two values are not equal
        * *note : in the operator '=', this is an assignment operator used to assign values; while "=="
        *         is used to check if values is the same
        *
        *   Logical Operators 
        *           The logical operators evaluates expressions by either true or false : 
        *       && AND operator : Checks if all conditions(relational) are true
        *       || OR operator : Checks if at least one condition(relation) is true
        *       ! NOT operator : Makes a comparison/relational operator opposite (e.g true == false). Reverses the boolean value
        *
        *   if | else if | else statements
        *  
        *       The if, else if, else statements are the basic decision making statements. Each of these statements scans if a given relational 
        *       operator or comparizon operator are true, and if true then the block of code inside these statements are run. Each order of re-
        *       lational operators are run from the top to the ground, and so placement of these operators matter.
        *
        *   Switch Statement
        *
        *       The switch statement tests the equality of a given variable to a certain value. It uses cases instead of if else, and default
        *
        *       Allowed : 
        *            Primitive : Byte, short, int, char
        *            Special / Reference : Enum, String
        *
        *       
        * */
//-------------------------------------------------------------------------------------------------------------------------------------------
        /*
         *  LOOP - Control Structure
         *      Loops are repetitive block of codes that is executed with a conditional or relational statement.
         * 
         * For Loop - The block of code is iterated a certain number of times. 
         *  syntax : for(index(counter); condition_to_be_met; increment/decrement/AAO){
         *                  //block of code             
         *          }
         * 
         * While Loop - The block of code is iterated if the given condition is still true, otherwise it will stop.
         *  syntax : while(condition){block of code};
         * 
         * Do While Loop - the block of code is iterated first without being evaluated, and then runs again for evaluation 
         *                 if the condition is still true.
         *  syntax : do{block of code}while(condition);
         * 
         * 
         *  NESTED LOOP - Control Structure
         *      Used for x and y, column and row, and many more. It has the same syntax as in C.
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         */
//-------------------------------------------------------------------------------------------------------------------------------------------
        /*
         *  CLASS INSTANCE INITIALIZATION | OBJECT INSTANTIATION | INSTANCE OF A CLASS 
         *      This is an initialization done by having the "new" to create a reference to an object inside a class. This has three ways
         * 
         *      Memory Allocation - memory is allocated to the object from the heap
         *      Constructor Call - calls the reference
         *      Reference Return - returns the object to be referenced
         * 
         *  
         *      ------------- Class & Object & Method & Members & Field & Access Modifiers & Packages & Libraries --------------
         *      Class - A class is a blueprint or template for an object to be initialized. It contains field and methods. They are very
         *              similar to structs, but structs can only contain variables.
         *          i.e. public class name{field, method}
         *      
         *      Object - An entity that is made from the definitions of a class. It is the class object initialization, instance of a class,
         *               and object instantiation.
         *          i.e. name object_name = new name();
         * 
         *      Method - A method is a function inside the class that manipulates or control the object of that class. You cannot initialize
         *               a function outside of the main function anymore, but you can initialize it within a class or within the main class.
         *          i.e public class name{field, static void print(){System.out.println("Hello World!");}}
         * 
         *      Field - Variables inside the class.
         *      Members - Everything that is inside the class, can be methods or fields.
         * 
         *      Packages - A list of file that has classes
         * 
         *      Package-private - This is also called default access, wherein the class is accessible only within that package
         * 
         *      Libraries - A list of packages 
         *      
         *      Constructor - Acts just like a function's argument, but with classes. You can input and assign values inside the 
         *      			  members of that classes by instances
         * 
         *      
         *      -- Access Modifiers
         * 
         *      Public - Makes the class, method, variables, accessible everywhere. However, public classes without static needs to have an object
         *               for one to access its methods and fields - these are called instances.
         *      Private - Makes the class, method, variables, accessible only inside that class. 
         *      Static - Makes the class, method, variables accessible only to that class. For example, if you have a public static class, then 
         *               the members of that class can only be accessed with that class with a dot operator, rather than accessing its members
         *               with an object. Also, if you have an array of classes and have static members or specifically fields, then those fields
         *               are shared among every array of objects and not unique. They are like pointers.
         *      Protected - Makes its member accessible to the same package and that package's subclass or subpackages
         *      Package-private - Makes the members accessible to the same package but not outside and subclasses.
         * 
         *      In summary with:
         *      public void (members) requires an object to be accessed | access is anywhere but only with an object (needs instances)
         *      public static void (members) does not require an object to be accessed | Access is anywhere 
         *      static void (members) access is only within the package and not outside
         *      protected (members) access is only within the package and not outside (needs instances)
         *      package-private(members) access is only within the same package
         * 
         *      ------- IMPORTANT ----------
         *          There are two ways to initialize a class and its members. 
         *              1. Into another file and access them without an import statement if they're in the same package
         *              2. To the file itself, and access them the same
         *              3. You can only have 1 public or package-private modifier in your file (class{main function} or public class{main function})
         *              4. And unlike in structs, with classes you can actually assign values to members!
         *              5. If a class, with public or public static, are outside of a package, import that outside package but make sure that the 
         *                 outside package has a package statement that determines it's a package
         *              6. Classes in general does not need to have an object. It will depend if an object is needed when the class
         *                 requires to have it or if the class has members that require it. It all depends at the class's members.
         * 		
         * 		-------- Package Creation ----
         * 			1. In creating a package, you must have a file that will act as the package. 
         * 			2. Each of your classes in that package must have the package statement (package package_name)
         * 			3. When importing packages, you must import the package name and the class name (import package_name.class_name)
         * 			4. It is possible to have nested packages (package package_name.package.name...)
         * 
         * 		
         * 	Nested Classes - nested classes are classes inside classes
         * 		And when it comes to instances, you will be required to use the dot operator if you need to instance an object if the
         * 		members of that class requires you to have one.
         * 			Scenario one - Classes inside a class
         * 					object objectName1 syntax:
         * 						object1;
         * 							classname.subclassname objectName = objectName1.new subclassname();
         * 
         * Constructor syntax:
         * 		class instruct{
		 *			String x;
		 *			instruct(String x){
		 *				this.x = x;
		 *   		}
		 *		}
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         *      
         * 
         * ---------------------------------------------------------------------------------------------------------------------------------
         *      
         *      ARRAY
         * 
         *          Arrays are a collection of similar data types. This data types can hold a value, although not more than one. Arrays are
         *          limited in a way that they can't be memory allocated if they are run. And so with that, once you initialize the memory
         *          or how many elements it will hold, that is the limit. The initialization is the same as in C, but the declaration is not.
         * 
         *          Initialization : Way 1
         *              syntax: 
         *                  datatype[] array_name = {block of similar values}; 
         *                  datatype[][] array_name = {{block of similar values}, {block of similar values}};
         *          
         *          Declaration : Way 2 - Uses the Class Instance Initialization
         *              syntax: 
         *                  datatype[] array_name = new datatype[memory allocation value];
         * 					datatype[][] array_name = new datatype[row][column]					
         * 
         *          For referencing and changing the value of the array, it is the same as in c
         *              syntax: 
         *                  array_name[index] = value;
         *                  array[index];
         * 
         *              Array functions
         *                  There are actually a ton of useful array functions, although not limited to the dot operator, in Java unlike in C.
         *                  With the dot operator, we can get the lenght of the array just as if we sizeof/sizeof[0] in C. It gets the total 
         *                  number of elements even if the array is not initialized.
         *                      syntax: 
         *                          array_name.length - gets the total lenght or number of array in an array(if 2d), otherwise it gets the total number of elements
         *  						array_name[index] - gets the total lenght or number of elements in an array   
         * 	
         * 				2D Array or Multidimensional Array: 
         * 					This is an array within an array, or a collection of array with similar data types.
         * 
         * 
         * ------------------------------------------------------------------------------------------------------------------------------------
         * 
         * 		String Methods
         * 
         * 			String methods manipulate and control the behaviours of string, and as string is a reference data type it has a lot of 
         * 			methods at its disposal.
         * 				syntax:
         * 					.lenght - this returns integers, this checks the lenght of the string or how many characters it has
         * 					.equal - this returns true or false; checks if a string is equal to another string or value
         * 					.equalsIgnoreCase - this returns true or false; same with the equal method but ignores cases
         * 					.charAt - returns chars; this checks the char based on the index argument
         * 					.indexOf - returns index; this checks the index based on the char argument
         * 					.toUpper - returns string; this makes the string all uppercase
         * 					.toLower - returns string; this make the string all lowercase
         * 					.trim - returns string; this ignores all the whitespace and returns letters
         * 					.replace - returns string; this replaces a string with the second argument
         * 					.isEmpty - returns true or false; this checks if a string is empty
         *					... there are many more with the dot operator
         *
         *  		sample:
         *  
         *  			String[] a = {"Mika", "Akim"};
		 *				if(a[0].length() == 4) {
		 *					System.out.println("I love you even more...");
		 *				}
		 *				if(a[0].equals("Mika")) {
		 *					System.out.println("I love you!");
		 * 				}
		 *				if(a[1].equalsIgnoreCase("akim")){
		 *					System.out.println("You're my bestfriend!");
		 *				}
		 *				if(!a[0].isEmpty()) {
		 *					System.out.println("My love is not empty!");
		 *				}
		 *				a[0].toUpperCase();
		 *				a[1].toLowerCase();
		 *				if(a[0].charAt(0) == 'M') {
		 *					System.out.println("I love you again!");
		 *				if(a[1].indexOf("A") == 0) {
		 *					System.out.println("My forever ally.");
		 *				}
		 *				a[0].trim();
		 *				String result = a[0].replace("Mika", "I love you");
		 *				System.out.println(result);
         * 
         * 			
         * 
         * --------------------------------------------------------------------------------------------------------------------------------------------------------
         * 
         * 			Wrapper Class
         * 				A wrapper class is the conversion of primite data type to reference data type like String. This is a way for primitive
         * 				data types to access some of the useful methods of the reference data types like lenght, equals, and more. This is als
         * 				-o used in collection (arraylist). This is also used in parsing.
         * 
         * 				autoboxing - this is the automatic conversion of primitive to object wrapper class based on the java compiler
         * 				unboxing - accessing the value of the wrapperclass; this is the automatic conversion of wrapper class to prim
         * 						   -itive data type.
         * 
         * 				A wrapper class is easy to do as they're pretty much the same with the declaration of primitive data types.
         * 				although their differences lies between their naming. Declaring a wrapper class requires the first letter t
         * 				-o be a capital and then the full name of the data type(i.e int = Integer), just like in String.
         * 				
         * 					syntax:
         * 						boolean -> Boolean 
         * 						int -> Integer
         * 						char -> Character
         * 						double -> Double
         * 						float -> Float
         * 						byte -> Byte
         * 						short -> Short
         * 						long -> Long
         * 							
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         *   ArrayList
         * 
         *      ArrayList is just like an array but it doesn't have a limit, like say a  * size, and is indefinite. It is a resizeable array. And as there is a 
         * 2-dimensional array, there is also a 2-dimensional arraylist. 
         *          
         *          Library:
         *              import java.util.ArrayList;
         *          Syntax:
         *              ArrayList<ref/pri> name = new ArrayList();
         *              <ArrayList<ArrayList<ref/pri>>> name = new ArrayList;
         * 
         *      In 2-dimensional ArrayList, we must first initialize an object,
         * as it is just an initialization of an arraylist that will hold arraylists.
         * It is like in making an array of a class, and all the values from that array
         * are null until we initialize objects relative to its size.
         * 
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         *      For Each Loop
         *          This loops to the entire array or collection, and cannot be modified 
         *      only iterate a certain number of times. It has two parameters, first is 
         *      the index data type. It's data type will depend on what your array or
         *      collection's data  type is. For example, if you have a non-regular 
         *      linkedlist and holds a class, say a linkedlist for a class rather than
         *      a linkedlist for only one data type, then your index's data type should
         *      be the class itself rather than the linkedlist. The second parameter is 
         *      the collection or array you're gonna iterate in. 
         * 
         *          Syntax:
         *              for(data_type i : collection/array}{}
         * 
         *      The ":" in the for each loop represents the word "in", so it reads as
         *      for each index in a collection.
         * 
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         *      Overloaded methods
         *          Traditional functions or methods or blocks of code that are executed
         *      when called have a method name and parameters, and this is called 
         *      method signiture, and these methods cannot be duplicated, although
         *      we have the overloaded method to change that. Overloaded methods are
         *      methods that has the same name but have different parameters such as data
         *      types and number of parameters.
         * 
         *          syntax:
         *              int add(int x){} - traditional
         *              int add(int x, int y) - overloaded
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         * 
         *      Printf
         * 
         *          This is an altenate to control what you print into the control. It is
         *      just like in C where we use conversion-characters, width, precision, and
         *      flags.
         * 
         *         Syntax:
         *             Conversion-Characters:
         *                  1. %b - boolean
         *                  2. %c - char
         *                  3. %s - string
         *                  4. %d - decimal
         *                  5. %f - floating point values
         *              Width
         *                  %numberCC - just like tabbing where we right allign
         *                  ex: %20s - this prints the string 20 spaces after
         *              Precision
         *                  %.numberCC - used to define how many decimals there should be
         *              Flags
         *                  "-" - left allign
         *                  "+" - used to show if a number is negative or positive
         *                  "0number" - used to show zeros before a number 
         *                              (ex: %04.2f = 0000123.23)(this moves the decimal
         *                               place to the left, although nothing changes to
         *                               the value: %2d = 010 = 010.0)
         *                  "," - used to show the comma grouping (ex: 1000 = 1, 000)
         *              printf
         *                  printf(format string/format specifier, object/variable/value)
         *           
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         *  
         * Final Keyword
         * 
         *      The final keyword in Java is the equivalent of const or constant in C.
         *  And there is no const keyword in Java, and instead you have a static finaL
         *  to ensure that it cannot be changed all throughout the program and that it
         *  belongs to that class only. 
         * 
         *      The final keyword makes sure that you only have one assignment and will
         *  not let you change it, making it a constant throughout the whole program. 
         *  You can use it for variables, classes, and methods, but you cannot you them
         *  for override fields and only within the class or overloads.
         * 
         *      Override is when a subclass attempts to use the names of the superclass'
         *  fields.
         * 
         *      Syntax:
         *          final variable/class/method; - final keyword
         *          static final variable/class/method; const keyword
         * 
         *      Also, it is good practice to have all the names of the variable, class
         *  or methods, to be all uppercase.
         * 
         * 
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         *  Constructor 
         * 
         *      It is a special method that is called when an object is instatialized or
         *  created. It acts as a parameter for the class to manipulate its fields. And
         *  so, when referencing the fields of the class, we have to use the this keyword.
         *  The this keyword lets us access the class' fields so that we can assign values
         *  to them using the dot operator. It is a much safer way to reference as
         *  overloading fields happen.
         * 
         *      Syntax:
         *          class human{
         *              long height;
         *              String skin_color;
         *              
         *              //constructor
         *              human(long height, String skin_color){
         *                  this.height = height;
         *                  this.skin_color = skin_color;
         *              }
         *          }
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         * Variable Scopes
         * 
         *      Variable scopes are ways to declare a variable and its visibility within
         *  the program. We have local and global. Local variables are declared within 
         *  a method, and it can only be accessed within that method unless the method
         *  returns it to another method using arguments. Global variables are declared
         *  inside a class, making it a field. It's visibility is anywhere within the
         *  class, a class's object, and anywhere if it's static. 
         * 
         *    
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         *  Object Passing
         * 
         *      Object passing is when you have an object as an argument to a class. It 
         *  is done by declaring an instance into a parameter, although without the new
         *  keyword.
         * 
         *      Syntax:
         *          import java.util.Scanner;
         *           class grocery{
         *               void display(item item){
         *                   System.out.println("Your current item is "+item.things);
         *               }
         *           }
         *           class item{
         *               String things;
         *
         *               item(String things){
         *                   this.things = things;
         *               }
         *           }
         *           public class tests{
         *               public static void main(String[] args){
         *                   grocery shop = new grocery();
         *                   Scanner scan = new Scanner(System.in);
         *               
         *                   for(int i = 0; i < 3; i++){
         *                       shop.display(new item(scan.nextLine()));
         *                   }
         *                   scan.close();
         *               }
         *          }
         * 
         *      This code actually ignores declaring an object and then passing it as 
         *  an arguement and instead we just assign an object directly to the argument.
         *  It is a more beneficial way to pass things as you won't have to declare object
         *  names anymore.
         * 
         * 
         * *--------------------------------------------------------------------------------*------------------------------------------------------------------------
         * 
         *  Inheritance
         * 
         *      Inheritance is when a superclass or parent class gives all of its
         *  attributes and methods or its members to a subclass or child class. We use
         *  this to attain the useful methods of another class for the class that needs
         *  it to work. We use the extends keyword after the class name to inherit.
         * 
         *      Also, while the members of the parent is inherited to the child, the
         *  child's members stays unique to that child, meaning that the parent cannot
         *  reference the child's members.  It is a one direction, from parent to child.
         * 
         *      Syntax:
         * 
         *          class Android{
         *              String os;
         *              int ram;
         *              ...
         *          }
         *          class Nukia extends Android{
         *              os = Android 11;//this doesn't work, it only works inside methods
         *                              using the this keyword.
         *          }
         * 
         *      The logic is that, while the parent does give everything, it causes it to
         *  override when we assign it outside any methods. And instead, we assign values 
         *  to the methods or to the variables of the child, all the while ensuring 
         *  proper assignment using the this keyword.
         *  
         *      The approach to inheritance is the relationship of general to specific. 
         *  The parent class must have the general characteristic such as employee, and
         *  the child class must have specific characteristic such as a manager that is
         *  an employee. In other words, the parent class must have the characteristics 
         *  of a group. This is also called an "is an" relationship, wherein in the 
         *  example, a manager is an employee.
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         * 
         */

    }
} 