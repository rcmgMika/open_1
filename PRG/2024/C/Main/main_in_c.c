#include <stdio.h>   //input and output
#include <stdlib.h>  //library
#include <stdbool.h> //boolean
#include <math.h>    //math functions
#include <string.h>  //string related functions
#include <ctype.h>   // character type for string functions, similar to python in .capitalize(you know this!)
#include <time.h>    //for the seed random number generator and random function
#include <unistd.h>  //for sleep and usleep for standard second and millisecond
#include <windows.h> //for sleep and usleep for sleep accepting millisecond and for usleep accepting nanoseconds
#include <stddef.h>  //for various macros sucha as size_t which is an unsigned long long int, NULL, and etc

//---------------------------------------------------
//--Rules in programming or logic
// 1. Placement of code matters
// 2. Random outputs often is caused by referencing a non-existent value or a wrong operation

/*int main(){
    printf("TEST THIS IS FOR CMD");
    return 0;
}
*/
/*
int main(){
    int x = 3;
    if (x <= 1){
        return (x);
    }
    else {
        return (x * (main()));
    }
    return 0;
}
Will get back to this when I know more about the syntax of functions in C, this is recursion
*/

/*

    /*VARIABLES - Alocated spaces that store a value. That variable will behave as its values.
    In defining a variable, we have two steps: Declaration(declare what type and name) and Initialization
    (to add values or elements to the variable)

    int x; - Declaration
    x = 3; - Initialization
    int x = 3;  Declaration + Initialization

    format specifiers - used in referencing variables in printf statements, starting with the symbol % as a placeholder
    (I.e %d - int, %f - float, %c - char, %s - string).
    Multiple Assignment - You can multiple assign variables

    int examScore = 40;
    float averageScoreOfStudents = 25;
    char surnameInitial = 'G';
    char fullSurnameInitial[] = "R.C.M.G";

    printf("Your exam score is %d\n", examScore);
    printf("The average score of students were %f and it was dissapointing\n", averageScoreOfStudents);
    printf("The highest score has an initial of %c\n", surnameInitial);
    printf("The person who got the lowest score has a full initial of %s\n",fullSurnameInitial);
    printf("%d\t%f\t%c\t%s", examScore, averageScoreOfStudents,surnameInitial,fullSurnameInitial);

*/

// Different data types

//    float Jay = 0.399090; // 4 bytes (32 bits of precision = 6 - 7 digits) %f
//  double Jay2 = 3.100000000000000000000; // 8 bytes (64 bits of precision = 15 - 16 digits) %lf
// in print float and doubles, if you want to have more digits displayed on the terminal, you must put the number
// of decimals that you want into the print statement before the format specifier letter/symbol
//(I.e printf("%0.99f"); - this will print 99 decimals, but note that the precision will be lacked.

// in
// you must have #include <stdbool.h> first and then the true or false values are converted into binary,
// which means 0 is false and 1 is true
// in conditions, a variable name can be put rather than comparing it with equal sign or logical operators.
/*
    bool Jay3 = false; //1 byte of information. %d
    // can either be 0(false) or 1 (true)
    char Jay4 = 100; // 1 byte (-128 to +127) %d or %c(in strings, the alphabet's number is the value and not the index locations)
    unsigned char c3 = '255'; // 1 byte (0 - 225) %d or %c
    //chars can have integers also and these int can also be used in the ASCII table to
    //reference the corresponding letter in the table, however the table only has 127 decimals.
    short int c4 = 32767; // 2 byte (-32,768 - 32,767) %d can be short c4 = 32767
    unsigned short int c5 = 65535; //2 byte (0 - 65535) %d can be unsigned short c4 = 65535
    int c6/long c6 = 2147483647; //4 bytes (-2147483648 - 2147483647) %d can be long int/long c6 = 2147483647
    unsigned int c7 = 4294967295; //4 bytes (0 - 4294967295) %u can be long unsigned int c7 = 42949672955
    long long int c8 = 9223372036854775807; //8 bytes (-9223372036854775808 or quintillion - 9223372036854775807 quintillion) %lld
    unsigned long long int c9 = 1844674403709551615; // 8 bytes (0 - +18 quintillion) %llu
    //in signed, you can add a "u" at the end so that there will be no error when displaying numbers that above that digit
    size_t = is an unsigned integer type in which it's size will depend on the largest possible object in a system
             32 bit systems = 4 bytes
             64 bit systems = 8 bytes
*/

// FORMAT SPECIFIER - Define and format a type of code to be displayed
/*
    %d: Ints, fchar
    %c: character
    %s: (string) array of character
    %f: float
    %lf: double
    %u: unsigned int
    %ld: long int
    %lld: long long int
    %llu: unsigned long long int
    %p: memory address
    %value_x: Hexadecimal representation in small case, and this can also represent the byte representation
    %value_X: Hexadecimal representation in big case
    %hhu: Print unsigned char's value as a number. Useful in print numbers only in hexadecimal representations
    %.1 - Decimal Precision
    %1. - Define the width
    %-:left allign
 */
/* CONSTANTS - A value that cannot be changed, useful when defining variables as we can define same variables
with different values and have logic errors. Also, capitalize all your variable name as it is common practice,
but not necessarily needed.

To make a variable, although not necessarily variables only, you need to add a constant statement before the main
variable:
    "const (variable name());"

*/
/* OPERATIONS

    +: addition
    -: subtraction
    *: multiplication
    /: division
    %: modulo/modulus for remainders
    ++: increment(add base 1)
    --: decrement(minus base 1)
**note that in division, you must define a varible or type cast a variable to become a float or a double
**as quotients can have decimals.
**also, you can have operations inside the print statement
    int i = 0;
    printf("I = %d", i = i + 10 - 5 or i+10-5)
*/

// Escape Sequences - precedes or follows by "\" and can be combined with letters
//  \n - newline
//  \t - tab(space)

/* AUGMENTED ASSIGNMENT OPERATOR - used to replace a statement inside a varible by getting that variable and then
assigning a result to it to return to the variable
    ex.
    int x = 10;
    x+=1 - this is the Augmented Assignment Operator, and this tells us that it will add one to x
** this is a shortcut and is similar to increment and decrement, although you can use all the operators.
*/
/* USER INPUT
To input something into the terminal we'll need to either use the scanf(format_specifier, variable_name then precede
with address of operator) statement for no whitespaces, and the function
fgets(variable_name, size_bytes, stdin(standard input)). And the fgets function will have a newline escape sequence so to stop
that, we'll need to #include <string.h> and then follow thne fgets function with:
                    variable_name[strlen(variable_name)-1] = '\0'

IMPORTANT: Input buffer refers to the spaces or characters that is attained from the before user input function, and the after user input reads that and makes that
its input. To preent this, we need to precede our "after user input" with another scanf or just put a space preceding the format specifier in our user input.

Also note that the order of inputs relates to the lines of the scanf/fgets and printf, just like in Python

// MATH FUNCTIONS

The first thing that we'll need to do is to have include a header file, #include <math.h>, the "h" means
header by the way, and this acts the same as the import functions in java and python.

The math functions in C are simply operations, and not formulas.

    sqrt(number/ variable) - for getting the square root of a number
    pow (number/ variable, power) - for getting the power of numbers
//the round functions can only be rounded in whole numbers, I do not know about the decimals
    round() - round down
    ceil() - round up
    fabs() - absolute round down
    log() - logarithms, although I do not know its base

    Trigonometry - sin, cos, tan; there are no sec, cosec, and cot in C language
    sin() - sine
    cos() - cosine
    tan() - tangent


*/
// A program that gets the circumference of a circle and its area
/*
const double PI = 3.14;
double radius;
//double circumference;
//double area;

    printf("Input radius:\t");
    scanf("%lf", &radius);

double area = PI * radius * radius;
double circumference = 2 * PI * radius;

    printf("Circumference: %lf\n", circumference);
    printf("Area: %lf", area);

//Lesson here: The flow or placement of your lines of code matters. I noticed this because when I initialized the area and circumference
//I placed them before the input for radius and it resulted in zero. But when I placed them after the input for radius,
//only then that they worked. Also when initializing the area and circumference, when Bro Code wrote his code that
//the area and circumference are lated in the line be initialized, I got curious because that's what I do when I write my
//result variables and thought will it be possible to initialize them in one line of code rather than with two lines?
//IT WORKED! They can be initialized with one line of code, but keep in mind that the placement of your code matters in each line.
*/

// Hypotenuse Solver Program = c^2 = a^2 + b^2
/*

int b;
int a;

    printf("Input for B: ");
    scanf("%d", &b);
        c = pow(c, 2);
        printf("Output: %d\n", c);

    printf("Input for A: ");
    scanf("%d", &a);
        a = pow(a, 2);
        printf("Output: %d\n", a);

    double hypotenuse = sqrt(b - a);
    printf("%lf", hypotenuse);
*/

// KASPERSKY thinks this code is a virus: This happened when creating the program for getting hypotenuse
/*
int c;
int a;

    printf("Input for C: ");
    scanf("%d", &c);
        c = pow(c, 2);
        printf("Output: %d\n", c);

    printf("Input for A: ");
    scanf("%d", &a);
        a = pow(c, 2);
        printf("Output: %d\n", a);
//the virus starts here, but you need the code above to make it work
double hype = c - a;
double sqrts = sqrt(hype);

    printf("Output: %lf", sqrts);

*/

// Conditional statements - these statements are boolean, in which you'll give a condition to every
// conditional statement except the else statement, although the else statement also has a condition
// in which it will execute its given code if the statements above such as if and else if are false.
// also you can create as many else if statements as you want! Makes me wonder what use is the switch
// statements
/*

int var1;

    printf("Input grade:\t");
    scanf("%d", &var1);
    printf("Check input:\t%d\n\n", var1);

        if (var1 == 1){
            printf("Very good!\n\n");
        }
        else if (var1 < 5){
            printf("You are good, but not the highest.\n\n");
        }
        else if (var1 == 5){
            printf("You failed.\n\n");
        }
        else{
            printf("Input incorrectly.");
        }


    //there will be a warning: comparizon between pointer and integer when you put a "[]" and define its byte size

//creating if statements that when you input a condition that is not within its given condition
//in which a value is asked and the user gives a letter, then the else statement will be executed.
    int var1;

    printf("Input grade:\t");
    scanf("%d", &var1);
    printf("Check input:\t%d\n\n", var1);//for debugging

        if (var1 == 1){
            printf("Very good!\n\n");
        }
        else if (var1 == 0){
            printf("Incorrect input; numbers only.");
        }
        else if (var1 < 5){
            printf("You are good, but not the highest.\n\n");
        }
        else if (var1 == 5){
            printf("You failed.\n\n");
        }
        else if (var1 == 0){
            printf("Incorrect input; numbers only.");
        }
        else{
            printf("Input incorrectly; no grade above 5.\n\n");
        }

// char will not work
//it worked by specifying a number such as zero, because the input will always be zero if you input
//a letter in an integer. And also, I kept in mind my rule that code placing matters.
*/

// SWITCH STATEMENTS - it is poor practice to use many else if statements, and so it is recommended to use switch
// statements as the alternative. This statement has a case instead, and that case will be tested for its equality
// to the input value, kinda like conditions in if statements. It is also recommended to use break statements as
// they exit out off a switch, meaning if you don't have a break statement, then a case without one will treat the
// other cases after it as its executable outputs.

// sample
/*
           switch(value_to_be_tested_by_the_cases){
              case 'value_user_input':
                  printf();
                  break;
              case 'value_user_input2':
                  printf();
              default:
                  printf();
           }

*/
/*
int p;

    printf("Input grade: ");
    scanf("%d", &p);

        switch(p){

            case 1:
                printf("You are with high honors!");
                break;
            case 5:
                printf("You failed");
                break;
            default:
                printf("You did not input a number");
                break;
        }
*/
// NOTES FOR SWITCH STATEMENTS - The cases cannot be a multi character and cannot compare values such as what
// if statements do
// also, you must state what type ofvariable like when you have a string you have quotation marks, in the cases.

// Weight unit converter: Testing conditional statements inside conditional statements
/*
char unit;
float weight;
char error; //undetifier: this is for when a user inputs a letter instead of the value of a weight

    printf("\nPress \"A\" to convert pound into kg; press \"B\" to convert kg into pound\n\nInput:\t");
    scanf("%c", &unit);

    unit = toupper(unit);

        if (unit == 'A'){
            printf("Enter kg:\t");
            scanf("%f", &weight);
                if(weight == error){
                    printf("\nIncorrect input.\n\n");
                }
                else{
                    weight = weight / 0.454;
                    printf("\nOutput conversion: %f", weight);
                }
        }
        else if(unit == 'B'){
            printf("Enter lb:\t");
            scanf("%f", &weight);
                if(weight == error){
                    printf("\nIncorrect input\n\n");
                }
                else{
                    weight = weight * 0.454;
                 printf("\nOutput conversion: %.1f", weight);
                }
        }
        else{
            printf("Incorect input");
        }
*/
// Switch statements cannot accept multi-character values, but the other if/else if/else can
// also, you can add conditional statements inside conditional statements

// CALCULATOR with 4 standard and modulo
/*
char oprt;
double n1;
double n2;
double result;


    printf("Input number: ");
    scanf("%lf", &n1);
    printf("\n\nChoose operation: (+ - * / %): ");
    scanf(" %c", &oprt);//the logic behind the space preceding that format specifier is that the input in the first scanf is the input in that space, and the %c will be the user's new input
    printf("Input number: ");
    scanf("%lf", &n2);

        switch (oprt){
            case '+':
                result = n1 + n2;
                printf("Sum = %.1lf", result);
                break;
            case '-':
                result = n1 - n2;
                printf("Difference = %.1lf", result);
                break;
            case '*':
                result = n1 * n2;
                printf("Product = %.1f", result);
                break;
            case '/':
                result = n1 / n2;
                printf("Quotient = %.1lf", result);
                break;
            case '%':
                result = (int) n1 % (int) n2;
                printf("Remainder = %.1lf", result);
                break;
            default:
                printf("\n\n\nSyntax Error\n\n\n");
                break;
        }
*/

// Logical Operators

// 1. AND (&&) - This LO checks if two or more conditions are true; they add conditions into conditional statements
// and as there are two or more conditions, it needs all to be true or met to be able to execute the statement.
// 2. OR (||) - TWO VERTICAL BARS This checks if at least one condition is true and will run it if one condition
// is indeed true.
// 3. NOT (!) - Reverses the state of conditions or as the word suggest "NOT" so it is a condition wherein
// a given condition will run if the condition is "not" the value. Precede a bool when you want to run the condition
// if its false rather than true("reverses the state of conditions"), or you can combine it by following the variable
// and combining it with symbols such as = --> != and this tells us "not equal to"

// AND
/*
int age = 12;

    if (age == 18 && age >=18){
        printf("You are an adolescent!");
    }
    else if (age < 18 && age > 13){
        printf("You are a teen!");
    }
    else{
        printf("You either have not been born yet or a child!");
    }
*/
// OR
/*
int age = 18;

    if (age = 18 || age > 18){
        printf("You are legal!");
    }
    else if ("age < 18 || age > 13"){
    }
    else{
        printf("You are a child");
    }
*/
// NOT
/*
int age = 0;


    if (age == 18){//age's value is not equal
        printf("You are legal!");
    }
    else if (age != 18){//is not equal
        printf("You are not legalllll!");
    }
*/

// Functions - You can actually create a function outside the main function, in which i'll guess too that
// you can create functions inside the main function. We use the void function_name(parameter){} to create our own function.
// This is useful when having a code that repeats itself or just use loops, and to create our own formulas or code
// Invoking or calling is the operation name when we reference or run a function. To call a function, we must put
// the function's name and its set of parenthesis and inside those parenthesis are arguments and parameters. The
// difference of the two is that parameters are inside the main function and tells you that it needs that to run
// that function. An argument is a variable that is dynamic and will give the value to the parameter by calling
// or invoking the function.

// notes___________________________
// functions cannot see the insides of another function so we must either call it or invoke it
// Creating a function to square numbers with user input
// in calling void functions, you'll need to have a print statement to return something with no resulting variable
// i.e sqrt(x)
// in calling return functions, you must have a resulting variable in order to print that output from the return function
// i.e double result = sqrt(result)

/*
int x2(int x)//you can also rename the variable name of the other functions as long as you follow the order of argument
{
    //int result = var1 * var1;
    //return result;
    //or
    return x * x;
}

int main()
{
int var1;
    printf("Input a number to square: ");
    scanf("%d", &var1);
    int result = x2(var1);//this is when we called the function and the outside function manipulates the input
        printf("The square of %d is: %d", var1, result);//this is when the outside function returned something
}
*/

// Ternary Operator  Shortcut to if/else statements and are written as (condition) ? value_if_true : value_if_false
// you can also use the logic operators to add more conditions into ternary operators
// you cal also add executables in "value_if_true" by placing a comma and then writing the code that you want to
// execute along with that statement
/* Creating a max number function
int max(int x, int y)
{
    return (x > y) ? printf("X is max") : printf("Y is max or the value is equal");
}

int main()
{
int n1;
int n2;
    printf("Max number indetifier\n\nInput pwease: ");
    scanf("%d", &n1);
    printf("Input another pwease: ");
    scanf("%d", &n2);
        int result = max(n1, n2);
}
*/

// See in project1.c, in Project# 9, the use of all my knowledge from this point before

// Function Protoypes - This ensures that a function call with an incomplete matching parameter from argument is not executed,
// as most C compilers still run function calls with incomplete argument and results in random outputs. This also makes the
// function be the first in line although not necessarily a law that you cannot have functions before
// the main if you have a prototype, but it is more convenient when made functions are placed before the main.
// also this helps in debugging as you can know the error. To make the function prototype, you only need to copy the function,
// without its body and instead write at the end a semicolon instead of a set of brackets.
/*
void panget(char name[], int age);

int main()
{
    char name[] = ("roob");
    int age = 18;

    panget(name, age);

    return 0;

}

void panget(char name[], int age)
{
    printf("Panget si %s at %d", name, age);

}
*/

// String functions - use first the string header file

// toupper - upper case char and not multi-character
// strlwr - lowercase everything
// strupr - uppercase evrything
// strcat - add strings together
// strncat - you can set how many you want to include by ", number"
// strcpy - replaces and copies the second string into the first string
// strncpy - you can set how many you want to copy by ", number", the replacement always start at the first

// strset - sets all the string into a certain character(not multi)
// strnset - choose which character and the lenght(it starts at the first): strnset(variable, 'x', 2)
// strrev - reverses the string

// strlen - finds the lenght of the string
// strcmp - compares strings if they are the same - boolean although reverse(true = 0, false = 1) or !(not), but you can change it into the boolean true(1) or false(0)
// strncmp - compares the given letter inside a string
// strcmpi - - same as cmp but ignores upr/lwr cases
// strnicmp - same as ncmp but ignores upr/lwr cases
/*
char tB(int y);
int main()
{
char name[] = "Robby";
char name2[] = "Clifford";

bool s = strnicmp(name, name2, 1);
tB(s);


printf("%s", s);

}
char tB(int y)
{
    if (y = 1){
        printf("false");
    }
    else{
        printf("true");
    }
}
*/
// in short, not regarding "n" to specify the choice and "i" to ignore cases,
// we have upper/lowerc case, concatenate, copy, set, reverse, lenght, compare

// Loops
// note - infinite loops that causes no error or intentional infnite loops are made from conditions not being met
// note - infinite loops that causes errors are made from conditions already met
// 1. for loops - repeat a section of code with a set of amount of times
// sample writing: for(index_or_counter; _condition(<>=);increment_decrement_AAO)
// note that the (<>) are the ones that will make the condition work as the define the value and then the equal presents the limit in which
// the condition or program will run.
/*
                    int main()
                    {
                        //for(int i = 0; i = 10; i++){ - triggers a no-error infinite loop: logic: the condition is not met before the run
                          for(int i = 0; i >= -10; i--){
                            printf("index = %d\n", i);
                        }
                    }
*/
// 2. while loops - repeat a section of code if the condition is still true or until it is proven false; this may run idefinitely or infinitely
// or will not run at all if the condition is already met or there is problem in your code with logic

// 1. prompt user if he is a kupal
/*
                int main()
                {
                    char name[25];
                        printf("\n\n\nKupal kaba? ");
                        fgets(name, 25, stdin);
                            name[strlen(name) - 1] = '\0'; //'\0\ is a null character or null terminator


                    while(strlen(name) != 2)//if this condition is proven true, it'll run, vice verse
                    {
                        printf("Aminin mona boss na kupal ka tangina mo\n");
                        printf("\nKupal kaba? ");
                        fgets(name, 25, stdin);
                            name[strlen(name) - 1] = '\0'; //'\0\ is a null character or null terminator
                    }

                        printf("Inamin na ni tangina!\n\n");


                        return 0;
                }
*/
// do while loop - absolutely executes the program inside it and then checks if the condition is still true, contrary to while loops that
// checks the condition first
// do while loop summation
/*
    int main()
    {
        int number = 0;
        int sum = 0;

            do{
                printf("Enter number for summation: ");
                scanf("%d", &number);
                if (number > 0 || '\0')//this con statement checks if the given value is 0, acts like a double security, and can be a different condition
                {
                    sum += number;
                }
            }while(number > 0 || '\0'); //'\0' is an equivalent of zero, and is called a null character or null terminator

        printf("\nOutput = %d", sum);

        return 0;

    }
*/
// name concatenation in do while loops
// i'll now include strlen for me to not rely on for loops inside and just to while loops
/* STILL IN PROGRESS
int main()
{
    char name[25];
    char sum[64];
    int iteration;
    int x = 0;

    printf("\nHow many words are there in your name? ");
            scanf("%d", &iteration);

        do{
                if(x < iteration)
                {
                    printf("Input: ");
                    scanf("%s", name);

                    strcat(name, sum);
                    x++;
                }
        }while(x < iteration);
    printf("\n%s", sum);
}
*/

// Nested loop - a loop inside a loop
/*
    The loop inside the loop is forced to carry out all it's condition(i.e of the inner for loop is required to run 4 times, then it
    will run 4 times first before the outer loop begins it's another cycle)

        for(int i=0; i<2; i++){ will run 1 time
            for(int j=(i + 4); j < (i + 4) + 4; j++{// will run 4 times

            }
        }loop starts with the outer loop again

        outer loop(1 time) -> inner loop(4 times) -> cycle end -> go back to outer loop

    Also, the outer loop or any for loop will not make the next line of codes after it to be run unless the for loop is done with
    it's condition
*/
// rectangle maker
/*
int main()
{
    char space = ' ';
    char symbol;
    int rows;
    int columns;
    char mae[43];


    printf("Input # of rows: ");
    scanf("%d", &rows);

    printf("Input # of columns: ");
    scanf("%d", &columns);

    //scanf("%c"); //this clears the input buffer because when we enter our input in scanf they include newline and the next scanf reads that
    fgets(mae, 43, stdin);

    printf("Input symbol: ");
    scanf("%c", &symbol);

        for(int i = 1; i <= rows; i++)
        {
            for(int j = 1; j <= columns; j++)
            {
                printf("%c", symbol);
            }
            printf("\n");
        }
}
*/

// continue and break statements in loops
// 1. Continue - this skips a section/process/output/code of an iteration or loop
// 2. Break - this break the statement and exits out; used in such as switch statements

// Counting forward that skips the half and breaks at the half of that half
/*
int half(int x);

int main()
{
int i;
int iteration;
    printf("What is the number in which you would like to start to count backwards? ");
    scanf("%d", &iteration);
    printf("Now what is the number which you would like to end? ");
    scanf("%d", &i);

    double halfI = half(iteration);
    printf("output halfI: %lf\n", halfI);
    double halfITwo = half(halfI);
    printf("output halfItwo: %lf", halfITwo);

        for(int i; i <= iteration; i++)
        {
            if(i == halfI)
            {
                continue;
            }else if(i == halfITwo)
            {
                break;
            }
             printf("%d\n", i);

        }
    return 0;
}
int half(int x)
{
    return x / 2;
}
*/
/* SPECIFIED PRINTING WITH ARRAYS AND CONTINUE
int main()
{

char array[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


    for(int i = 0; i <= sizeof(array)/sizeof(array[0]) - 1; i++)
    {
        if(i != 8 && i != 21 && i != 23 && i != 11 && i != 2 && i != 3 && i != 12)
        {
            continue;
        }
        printf("%c ", array[i]);
    }

    return 0;
}
*/

// Array - A data structure that is finite in space that can store the same data types, and array decays into pointer or memory addresses as
// it only acts as a box for the address of specific related data types
// in initialize an array, it is like when writing an array of characters using the [] followed by curly braces a
// of which that will be where elements will be placed and their index locations
/*
    in intializing an array,
    data_type name[no. of elements] = {list};
    note: the "no. of elements" inside the square brackets does not correspond to the number of bytes of that array. It only pertains to
    the literal no. of elements that can be put. And each of the no. in that no. of elements is equal to the size in bytes for that
    specific data type.
        e.g
            int name[1] = {1};
            [1] = 4 bytes
            int age[3] = {12, 11, 10};
            [3] = 12 bytes

    in making an array as a parameter of a function
        note: only the first element of the array is included into the argument and not the whole, so that size of that array
              once it comes to the function is only 1 element even as you can access all the values included in that array. And
              so to fix this, we need to also include into the parameter the number of elements of that array.
*/
/*
    Also, in making an array function parameter, you need to know that in the argument, the first element of the array is the
    only thing that is included. And so you need to also include the size of that array because when you read the array's byte
    size in that function, you'll only get the size of the first element and not the whole.
*/

// and you can initialize an array in 3 ways,
// int age[] = {12, 90, 23, 54, 90} this array has not yet initialized its size or space
// int age[4] = {12, 90, 23, 54, 90} this array has not yet initialized its size or space
// int age[];
// age[0] = {12} - the value inside the straight bracket is the index location and not the size of the array
// age[1] = {90}
//...
// once you compile an array, you cannot change it anymore unless you go back to the start and remove that array and create again
// i.e double prices[] = {index0, index1, index2, index3}; and in referencing an array, for example in print statement,
// we just need to put the index location inside the print statement's address like this
// double prices[] = {index0, index1, index2, index3}; printf("%lf", prices[0, 1, 2]);

// initializing an array with for loops
/*
int main()
{
int iteration;
int age[iteration];
age;
int number = -1;
    printf("Input number of arrays: ");
    scanf("%d", &iteration);
        for(int i = 0; i <= iteration; i++)
        {
            age[i];
            printf("Array list: ");
            scanf("%d", &age[i]);
            number += 1;
        }
    printf("Array no1: %d\n", age[0]);
    printf("array no2: %d", age[1]);
}
*/

// the above calculation of the number of array is too messy and more code. So we'll use the function "sizeof(array)" to display
// the total byte of the variable and then devide by the byte of that variable to always update, as I have done in the variable way,
// the number of iterations in that for loop
// so i'll make the code above much more cleaner with this:
/*
int main()
{
    int age[] = {9, 18, 27, 36, 45, 54};

        for(int i = 0; i < sizeof(age)/sizeof(age[0]); i++) //note: the use of sizeof function is to get the total number of elements
        {
            printf("%d\n", age[i]);
        }

    return 0;
}
*/

// 2D array - essentially an array inside of an array, in which this 2d array will act as the row and the inside array will be the column, however they still have
// there own row and column. The inside an array will be elements, and this is useful in creating matrices, grids, and table of data
// in declaring a 2D array, we just need to have two straight brackets and the first bracket will be the 2D array and the last bracket will be the inside element of that
// array

// note in referencing an array
// in print statements or any input, you'll reference using the index location
// in initializing an array, you'll reference using index location
// in declaring an array, you'll write the size of the array and not its indedx location

/*
int arr[] = {1, 2 , 3};
        printf("Address2: %p\n", &arr[2]);
        printf("Address1: %p\n", &arr[1]);
        printf("Address2 using array subscript: %p\n", (arr + 2));

        //has a built in deference - REFERENCING #1
        printf("value of array[2]: %d\n", arr[2]);
        //only has the address - REFERENCING #2
        printf("value of array[2]: %d", *(arr + 2));
and this is addtion, and as addition is commutative in which the placement of elements does not have any requirements,
we can place the elements however we want
        printf("", *(2 + arr));
        printf("", 2[arr]);


*/

// first method of declaration and initialization
/*
int main()
{

int age[3][3] = {{97, 83, 63},
                {24, 27, 29},
                {19, 17, 18}};

    for(int i = 0; i < sizeof(age)/sizeof(age[0]); i++) //referenced the index location of the 2d array
    {
        for(int j =  0; j < sizeof(age[0])/sizeof(age[0][0]); j++) //referenced the index location of the array inside the 2d array
        {
            printf("%d ", age[i][j]);
        }
        printf("\n");
    }
}
*/
// second method of declaration and initialization
/*
int main()
{
int height[3][9];

height[0][0] = 175;
height[0][1] = 150;
height[0][2] = 165;
height[0][3] = 190;
height[0][4] = 110;
height[0][5] = 124;
height[0][6] = 126;
height[0][7] = 127;
height[0][8] = 121;
height[0][9] = 124;
height[1][0] = 100;
height[1][1] = 110;
height[1][2] = 140;//index location in terms of the first array is 11
height[1][3] = 130;
height[1][4] = 129;
height[1][5] = 90;
height[1][6] = 10;
height[1][7] = 127;
height[1][8] = 134;
height[1][9] = 112;
height[2][0] = 100;
height[2][1] = 100;
height[2][2] = 100;
height[2][3] = 100;
height[2][4] = 100;
height[2][5] = 100;
height[2][6] = 100;
height[2][7] = 100;
height[2][8] = 100;
height[2][9] = 100;
height[3][0] = 100;
height[3][1] = 100;
height[3][2] = 100;
height[3][3] = 100;
height[3][4] = 100;
height[3][5] = 100;
height[3][6] = 100;
height[3][7] = 100;
height[3][8] = 100;
height[3][9] = 100;

    for(int i = 0; i < sizeof(height)/sizeof(height[0]); i++)//finding the size of the 2d array and its indeces
    {
        for(int j = 0; j < sizeof(height[0])/sizeof(height[0][0]); j++)//referencing the index/group of elements of the 2d array and following the index of that index
        {
            printf("%d ", height[i][j]);
        }
        printf("\n");
    }
}
*/
// Initializing an char array later
/*
char abcd[64];
strcpy(abcd, "A");
printf("%c\n", abcd[0]);
*/

// 2D array with strings(linear)
/*
int main()
{
char name[][64] = {"Alan", "Roby", "Akim", "Pine"};//we don't have string in C so when we declare the size of the array(not the 2d array), we are declaring the its word size since char only has 1 byte
strcpy(name[1], "Pogi");
//see if this code above is the 2d array or the 1d array
    for(int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    {
        printf("%s ", name[i]);
    }
}
*/
// as you can see, this 2D array is not a 2 dimensional array that has both rows and columns, and instead it is only linear of x in the cartesian plane
// why? because when we initialize an array of character, we can only put 1 string into it compared to when we have an array of integer that we can
// already put many integer into it as long as it remains as columns. And thus this 2D array of string is linear.

// Swap two values of variables
// to swap values, we cannot reference two variables to each other because the value of that two variable will be the same, and instead we can think of another solution that is
// either another variable or the string copy function; although the string copy function is the only one that works with strings, but the another variable method works
// with all the data types except string because we don't have strings in C and we are referencing an array and changing its value. And as the above code used the strcpy function
// it is what we'll use too to swap the values of an array of character.
// note: also in swapping the values in strings, we need to declare its size in order to not have error in string copy function because we cannot copy a string into a
// less word string
/*
int main()
{
    char nameOfTeens[64] = "Robby Clifford";
    char nameOfAdults[64] = "Robby Clifford Garcia";
    int ageTeen = 18;
    int ageAdult = 19;
    int temps;
    char temp[64];

    strcpy(temp, nameOfTeens);
    strcpy(nameOfTeens, nameOfAdults);
    strcpy(nameOfAdults, temp);//this is actually not neccessary because we can just reference the temp

    temps = ageTeen;
    ageTeen = ageAdult;
    ageAdult = temps;//this is actually not neccessary because we can just reference the temps

    printf("You name is %s, and your age is %d", nameOfAdults, ageAdult);
    printf("\nWhile this other man's name is %s and is aged %d", nameOfTeens, ageTeen);

//the code below signifies that the placement of code matters rule!
    temps = ageAdult;

    printf("\nOutput: %d", ageTeen);

}
*/

// Sorting an array
/*
void sort(int arrayRandom[], int size);
void printArray(int arrayRandom[], int size);

int main()
{
    int arrayRandom[] = {1, 5, 6, 7, 4, 3, 2, 8, 9};
    int size = sizeof(arrayRandom)/sizeof(arrayRandom[0]);

    sort(arrayRandom, size);
    printArray(arrayRandom, size);
}

void sort(int arrayRandom[], int size)
{
    for(int i = 0; i < size - 1; i++)//we inus 1 because the total run of this for loop will be 10 and that will result in referencing a non-existent value. And why start at 0? Well because the index location starts at zero
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arrayRandom[j] > arrayRandom[j+1])
            {
                int temp = arrayRandom[j];
                arrayRandom[j] = arrayRandom[j+1];
                arrayRandom[j+1] = temp;
            }
        }
    }
}

void printArray(int arrayRandom[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arrayRandom[i]);
    }
}

//THE LOGIC IN MINUS 1

size = 9

- for loop with - 1
for(int i = 0; i < size - 1; i++)

array = 1, 2, 3, 4, 5, 6, 7, 8, 9
index = 0, 1, 2, 3, 4, 5, 6, 7, 8


if(arrayRandom[8] > arrayRandom[8+1])//this is actually the reason because we can only have 8 digits in this because we add 1 into it, becoming 9
            {
                int temp = arrayRandom[j];
                arrayRandom[j] = arrayRandom[j+1];
                arrayRandom[j+1] = temp;

output:
0>1 = 1
1>2 = 2
2>3 = 3
3>4 = 4
4>5 = 5
5>6 = 6
6>7 = 7
7>8 = 8
8>9 = 9
---------------------------------------------------------------------------
- for loop without - 1 in print statement
for(int i = 0; i < size; i++)

output of this:
Output size: 9
0
1
2
3
4
5
6
7
8
*/

// Seed random number generator(srand) and random function(rand)
// What this do is that the srand function gets a random seed or number and then the rand function will get the seed and produce another random number and returns
// that output to the seed, and the cycle goes on
// To write:
// srand(time(NULL)) - the time and null means that the srand will produce the seed with the current time to ensure different shuffles each run or different outputs each run
// variable_name = rand() % (variable name + 1) - the % (variable_name/value + 1) here picks a random index into the array. The modulo symbol determines the specific
// range/limit of the generator

// Structs
// structs are a collection of members, kind like a variable, in which it can store different data types, and is listed under one block of memory which is the
// inside of that struct, and of which they can be referenced using a variable name.
// In writing a struct, you need: struct Tag_name. And in referencing it, we needto go into the main function because this is a separate function, and then
// assign a variable name next to the tag name, of which we can access the "block of memory" inside it.
// It is similar to arrays in which it contains data of a "member" or the types of variables. This is actually a way to group many variables of different data types.
// Putting values in that struct without the initialization or assigned variables, it is the same way as we initialize a variable later on. Like for example we use strcpy
// to change the string of an array of character. We just need to reference the variable name because the tag name is just the list name.
// In referencing or assigning a variable into the struct, we just need to add a variable name to that struct. And it can contain many different variable names and have
// different values inside that block of memory.
// to access and assign a value to the block of memory, or specific variables inside that struct, we use the member access operator ".".
// You cannot initialize the members of the struct unless directly in the main function. This is because no memory is alloted into the struct until it is initialized
// in the main function.
/*
//Declaring a struct
struct tag_name
{
    block_of_code_data_types;
};
//initializing a struct in the main function
struct tag_name variable_name;
//initializing them with values
tag_name.variable_name = value;
with strings you do the strcpy(tag_name.variable_name, "value")
//multiple initialization to structs
struct tag_name variable_name = {placement rule of in conding}
*/

// Typedef - This is a function that provides a nickname or a shortcut that can be declared using that nickname. It is common to use these in structs as
// declaring them in the main function is a hassle to do. They are very similar to structs.
// Declaring a typedef
/*
typedef data_type(note that this is not the name of the variable) nickname;

//actual example and with structs
*/
/*
typedef char nickname[25];
typedef struct
{
    nickname name;
    int age;
} user;

int main()
{
    user Robby;//declaring the struct
    Robby.age = 10;
    strcpy(Robby.name, "Robby Clifford");
    printf("%d\n", Robby.age);
    printf("%s", Robby.name);

    user Leo = {"Leo", 10};//multiple initialization


    nickname Name;//declaring the typedef char
    //can be initialized already
    //can be initialized with scanf
    //can be initialized later with strcpy because this is an array
    strcpy(Name, "Robby");
    printf("%s", Name);



    return 0;
}

*/

// Using the concept of array, structs, and typedef
/*
typedef struct
{
    char name[64];
    int age;
} user;
struct example
{
    char name[64];
    int age;
};

int main()
{
    user robby = {"Robby Clifford", 18};
    user leo = {"Leo Gebuilaguin", 19};
    user array[] = {robby, leo};
    //if we don't have a typedef
    struct example kenn = {"Kenn Alonzo", 18};
    struct example ron = {"Ron Salen", 18};
    struct example array2[] = {kenn, ron};

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("%-s\t\t", array[i].name);
        printf("%d\t\n", array[i].age);
        printf("%-s\t\t", array2[i].name);
        printf("%d\t\n", array2[i].age);
    }
    return 0;
}
*/

// Enum or enumeration - A user defined name for an integer, kinda like an array of characters. When declaring an enum, we start with the standard index value of 0,
// however you can change that by equaling the integer name into a certain number. This enum function helps the user to make their code readable to other people

// to declare an enum and initialize:
//      enum identifier_name{constant_variable_name !||= specified_value};
// to declare and initialize in to the main function
//      enum identifier_name variable_name = constant_variable_name;
/*
enum roman{I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000};

int main(){
    enum roman numeral = I;
    printf("%d", numeral);

    return 0;
}
When assigning a nickname to the enum, we just treat it like a struct and that the nickname will be placed after the closing curly bracket
:
typedef enum Roman{I = 1, X = 5, L = 10} romnum;
typedef struct tagname{int i; char ble; float p;} lol;

int main(){
   romnum Numeral = I;
   lol Robby = {18, 'a', 0.9};

   printf("%d\n", Numeral);
   printf("%d", Robby.i);
}

*/
// Alphabets are numerically valued, a = 1, b = 2,...;
/*
int main()
{
    char name[] = "ZA";

    if(name[0] > name[1])
    {
        printf("Z is greater than A");
    }else{
        printf("A is greater than Z");
    }
}*/

//-----------------Preprocessor Directives & Macros---------------------------------------------
/*
    prepocessor directives are special instructions to the compiler that will execute before the compilation

    1. #include - this includes external files or libraries for modularity and reusability of codes from that said
                  external files or libraries
        #include <header_file>
    2. #define - creates a macro or shortcut for code simplicity that has a symbolic name and a constant value or code snippet
        #define symbol_name value
    3. #ifdef, #else, #endif, ifndef - These directives are used to debug code. They include blocks of code that can be excluded
                                       or included, similar to conditional statements. This directive is designed to check
                                       if a code or define statement is included. This can be run only inside the main function
        #ifdef - behaves like an if statement
        #else - behaves like an else statement
        #endif - behaves like a break statement
        #ifndef - if the condition is met, creates or includes something(e.g header files, define, etc)

            code snippet
            int main(){
                #ifdef macros
                    printf("Macro exists");
                #else
                    printf("Macro doesn't exists");
                #endif

                #ifndef macros //creates the macro
                    #define macros 12
                #endif

                printf("\nCurrent macro is equal to %d", macros);

                #ifdef macros //checks if the ifndef created the macro because we don't have it
                    printf("\nDoes have now");
                #else//just like in conditional statements, you can also not include else directives, it's not required for every ifdef
                    printf("\nStill does not have");
                #endif

                return 0;
            }


*/
//----------------Memory--------------------------------------------------------------
/*
    Memory : This is a collection or an array of bytes within RAM
    Memory Block :  This is a unit or a byte that and is used to hold a value
    Memory Address : This is the address of the memory block through the RAM
*/

//----------------Pointers and Memory Management/Allocation----------------------------

// Pointer - a pointer is a variable that stores the memory address of another variable; it does not store it's value

// a pointer does not save space, but rather the runtime. It makes code run faster.

/* Initializing and declaration of pointers WITHOUT ARRAYS
dereference = *, in which this acts kind of like a car that you will tell where to go to
indirection operator - *
address = &, this is the address of something

declare and initialize
    int age = 18;
    data_type* pvariable_name = &variable; - This is the initialization of the address
this tells us that "*" is the symbol to tell the system that we're making pointer
the variable name varies, but common decency requires to add p first and then camelcase to the variable name of the pointed
&variable tells us that the address of that certain variable is referenced
-- You can also declare pointers without assigning a value to it, and it is good practice to assign a null value to the unassigned pointer
    int *p = NULL;
    p = &variable;

    ----Style in declaration----
    there is no difference in int* p and int *p, they're the same. And so placing the indirection operator doesn't matter at all.

manipulating the pointer
notes: Pointer stores only the address and not the value of the variable, and so if you change the value of the pointer, you directly changes the value of the
variable you pointed it into.

    in referencing the value of the pointer, we need to dereference the pointer
        printf("%d", *pvariable_name);
    in referencing the address of the pointer, we need to reference the pointer
        printf("%p or %d", &pvariable_name or pvariable_name);
    in changing the value of the pointed object using pointers, we need to dereference the pointer and assign the value to it
        *pvariable_name = value;
*/
/* Initializing and declaration of pointers WITH ARRAY
before we dive into referencing arrays, there is a fun fact about referencing the values of arrays
    ARRAY SUBSCRIPT Operator - array decays into pointer, in which they become addresses
    And as array is just a list of specific varaibles, each individual variable in that array has their own memory addresses
    To reference an array subscript operator:
        (array + index_location) or (index_location + array) - as addition is commutative
    To reference an array value from the subcript operator
        Derefence = *(array + index_location) or (index_location + array) - as addition is commutative

in declaring and assigning of pointers with array
    //pointers with array
        int d[] = {123, 245};
        int* pD = d;//pointers need address, and arrays decays into address so we don't need '&'
        *(pD + 1) = 2;//assigns new value of an index with array subscript operator
        pD[0] = 1;//assigns new value of an index with standard array/s
            printf("With array: %d\n", pD[0]);//address pointed into the index
            printf("With array 1: %d\n", *(pD + 1));//dereference the address

----------------THE USE OF POINTERS-------------------
    : dynamic memory allocation
    : works with the original variable
    : faster runtime
    : searching and sorting large data structure
    : algorithms like linked-list, queqe, and stack
    : returning more than one value in functions(i.e 2 dimensional array)
*/
//-------------Memory manipulation--------------------
/*
Memory manipulation manipulates the main memory or the memory address of a pointer or void pointer / Byte manipulation
Void Pointers - Pointers that doesn't have a data type, and is also called a general purpose pointer in which it doesn't have
any limiter as you can use them in anything.

Included from the C standard library & string functions, and this functions are jsut like the string functions


1. memcmp - Compares two memory addresses, useful in comparing arrays.

- memcmp returns 0 if true, 1 if false; just like in strcmp
- in writing memcmp/syntax
    memcmp(void_pointer1, void_pointer2, the size of these two void pointers or how far you want to scan or include to the scan/byte);

2. memcpy - changes the value of a byte

        - in writing memcpy/syntax
            memcpy(void_pointer, void_pointer/&variable/memory_address, size of the void_pointer/how far we want the change to happen in
                   in terms of bytes)

--------------------Size of operators---------------------------------------------------------------------------------------------------
        sizeof - gets the corresponding byte if data type(e.g sizeof(int)), but if a variable/array then it gets the
                 total number of elements it can hold.
        sizeof(void_pointer)/sizeof(void_pointer[index x] or sizeof(datatype)) - gets the corresponding no. of existing elements of an
                                                                                 array that its size is not initialized

        We cannot really know how many existing elements are there in an array if that array has a known size, but what we can do is
        iterate a scan to an array and include only the values that are not zero and then increment to another variable, as we know
        that every undeclared value of a given variable is given a value of zero.
            for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
                if(array[i] != 0){
                    variable++
                }
            }
        variable = the no. of existing elements in an array
        We can also change the condition of the if statement into array[i] == 0 to count only the non-existent values of the array
    ---------------------Sample-----------
        int j = 1;
        int k = 2;

        //converts integer value
        memcpy(&j, &k, sizeof(j));
        printf("%d\n", j);
        //converts integer array's value ## array's whole elements
        int q[] = {1, 2};
        int w[] = {3, 4};
        memcpy(q, w, sizeof(q));
        printf("%d %d", q[0], q[1]);
        //converts only the existing elements in an array
        int kq[64] = {12, 15};
        int l[64] = {19, 20};
        int no_of_ext = 0;
            for(int kl=0;kl<sizeof(kq)/sizeof(kq[0]); kl++){
                if(kq[kl] != 0){
                    no_of_ext++;
                }
            }
        memcpy(kq, l, no_of_ext);
        printf("\n%d %d", kq[0], kq[1]);

3. memset - Sets a specific value through memory

    memset is just like strset in which it sets a specific value through memory or byte. However, the second parameter changes
    a byte's specific value.
        to write memset,
            memset(void_pointer, byte_to_change, byte/how far you want to scan)

//setting variable values
        int age = 1;
        int spec = 1;
        char q = 'A';
        int p[] = {14};
        memset(p, 1, sizeof(p));
        //memset(&age, 0, sizeof(age));
        printf("%d\n", p[0]);
    //learn what byte representation is
    //learn what hexadecimal representation is
        hexadecimal representation:
            printf("%08x\n", p[0]);
            printf("Byte size of p: %d", sizeof(p));

4. memchr - checks if a value in byte exists.

- Byte representation or hexadecimal representation varies from data type to data type
        e.g integer has a byte representation of 0 0 0 0, and it has 4 zeroes because it's size is 4 and the
            standard value of an undeclared variable is always 0
- memchr either returns an address or NULL/0000...
- In writing memchr/syntax
    memchr(variable/array, value_to_find_in_byte, specific size of the data type/how far you want to scan)
*note that in writing with an array, you need to also specify the amount of elements you want to scan or index

(e.g):
    int j = 1;
    //the representation in byte or the byte value of this int j is 0 0 0 1, because integer has the size of 4 bytes.
    //this can also be the hexadecimal format of that int
    if(memchr(&j, 1, sizeof(j)) != NULL){
        printf("These is a value in a byte");
    }else{
        printf("There is no value in a byte");
    }
    printf("\n%04x", j);
    //%valuex is the hexidecimal format specifier to get the individual bits of imformation;
    int* k = memchr(&j, 1, sizeof(j));//we turned this into a pointer because memchr returns either an address or null
    int* mAddress_of_j = &j;
    printf("\n%p", k);
    printf("\n%p", mAddress_of_j);
    return 0;
*/

/* Printing Memory into the Console
    Each particular value has a hexidecimal representation. And in each symbol of hex is 4 bits. So the idea is to have a placeholder
    for 1 byte, in which case we'll use unsined char as it can have values of letters or decimals, and to use %02x for printing hex
    with both number and letter, or the %hhu in which it prints the value of an unsigned char. Also, the sizeof operator returns a byte
    in unsigned long long integer form, and so we'll use that too. You can also use the sizeof function for anything, even in enums and structs.

typedef struct
{
    int a;
    long int b;
    short c;
    float d;
    double e;
    char f;
    char g[64];
    unsigned char h;
    unsigned int j;
    unsigned long long int k;
    long long int l;
}mika;

int main(){

    unsigned char data;//for representation of byte, as in char there is one byte. And we only need positive values so we are using unsigned
    mika akim = {-1, 2, 3, 4.1, 5.1, 'A', "Data", '1', 1, 6, -6};
    printf("Size of struct: %llu\nWe should have %llu pairs of in terms of hexadecimal.\n", sizeof(akim), sizeof(akim));
    printf("Hexadecimal representation of struct:");
        for(int i=0; i < sizeof(akim); i++){
            if(i % 4 == 0){
                printf("\n");
            }
            data = *(((unsigned char*)&akim) + i);
            //This behaves just like printing all the values of an array. In this case, typecasting the address of our struct and then
            //increments it by i, just like in index of array, and dereferenced it to get it's value
            printf("%02x ", data);
        }
        printf("\n");
        for(int i=0; i < sizeof(akim); i++){
            if(i % 4 == 0){
                printf("\n");
            }
            data = *(((unsigned char*)&akim) + i);
            printf("%hhu ", data);
        }
    return 0;
}
*/

/*
    Changing values for increment/decrement & augmented assignment operator
    int j = 10;
    printf("%d", j+1); outputs 11
    printf("\n%d", j); outputs 10
    printf("\n%d", ++j); outputs 11
    printf("\n%d", j); outputs 11
    printf("\n%d", j+=3); outputs 14
    printf("\n%d", j); outputs 14

    This is proof that ordinary operations can only affect that particular line and is not changed throughout, while increment/decrement
    and augmented assignment operators affect the lines thoughout

*/
//---------------------------------------------------------------------------------------------------------------------------------------
/*
        Binary Operators
            This operators operate on binary digits. Compares true or false.
                We have :
                    AND (&) - Returns 1 if both binary digits are 1, otherwise returns 0
                    OR (|) - Returns 1 if at least 1 binary has 1, otherwise returns 0
                    XOR (^) - Returns 0 if two binary has 1, vice versa. Acts just like AND and OR but
                              when the same values come, they return the opposite value
                    Complementary (~) - Makes the bits/opperand opposite
                    Left Shift (<<) - Shifts and times the value to a certain value of the binary to some position
                        syntax : var = var << position_number
                    Right Shift (>>) - Shifts and devides the value to a certain value of the binary to some position
                        syntax : var = var >> position_number
    ** The "certain value" from left shift and right shift pertains to the number in which
       the value of the byte will change. It's always base 2 in multiplication if the pos-
       ition is 1. However, if it is not 1, then multiply that default base 2 into the nu-
       mber of that position.
            int var = 64;
            int result = var >> 3; This will be devided by base 2(position), in which if we substitute
                                   2(3) = 6. So the value of var will be 10.666...

------------------- BINARY ----------------------------------------------------------------------------
        Binary values are base 2 in multiplication, in which the order is
        (Position)
            1(2) -> 2(2) -> 4(2) -> 8(2) -> 16(2) -> 32(2) -> 64(2) -> 128(2) -- This is 1 byte
        (True Position)
            128(2) <- 64(2) <- 32(2) <- 16(2) <- 8(2) <- 4(2) <- 2(2) <- 1(2) -- This is 1 byte
              1        1        1         1       1       1       1        1
        Binary digit counting always start at the end, and each "1" in each individual position will
        "activate" the binary values that are above.
            e.g : 8 =  00001000
                : 10 = 00001010 // the position's 2 has a 1 so it "activated" it's value
                : 11 = 00001011 // the position's 2 and 1 has a 1 so it "activated" it's value

    */
// Application --------------------------------------------------------------------------------------
/*
int age = 6; // binary =   00000110
int age_2 = 12; //binary = 00001100
int result = 0; //binary = 00000000
int a = 64;

 result = age & age_2; // binary = 00000100
 printf("AND result: %d\n", result);
 result = age | age_2; //binary = 00001110;
 printf("OR result: %d\n", result);
 result = age ^ age_2; //binary = 00001010;
 printf("XOR result: %d\n", result);
 result = ~age; //00000110 becomes 11111001; 128+64+32+16+8+1
 printf("Complementary result: %d\n", result);
 result = age << 1; // original binary = 00000110 | left shift = 00001100
 printf("Left Shift result: %d\n", result);
 result = age_2 >> 1; //original binary = 0000110 | right shift = 00000110
 printf("Right Shift result: %d\n", result);
 result = a >> 2;
 printf("Left Shift of a: %d\n", result);
 */

// HOW TO SWAP THE VALUES OF TWO VARIABLE USING BITWISE OPERATOR : XOR
/*
    #include <stdio.h>
    int main(){

        int x = 25, y = 40;
        //x = 00011001
        //y = 00101000
        x = x ^ y; //00110001 = 49
                //00101000
        printf("%d", x);
        y = x ^ y; // 00011001 = 25
        printf("\ny = %d", y);
        x = x ^ y; //00110001
                //00011001
                //00101000 = 40
        printf("\nx = %d", x);
    }
*/

//---------------------------------Boolean-----------------------------------------
/*
    Boolean  are values that are either zero or one, false(0) or true(1).
        Relational and logical operators are true boolean values.
        String functions and Memory functions are not true boolean values. This means that their 0 means true, and 1 means false.

        Boolean logic doesn't apply to everything, just like in string functions and memory functions
        In boolean logic, non zero values are true and vice versa, but in non boolean logic the functions may return something else,
        that is being the opposite of that. They can return calculations, pointers, addresses, and etc. They are similar however as they
        are all comparizon operators.

*/

/*
    CHARACTER MANIPULATION :
        works only with individual character : returns boolean like values, so it's much better to have a boolean
        placeholder

   syntax (not complete)
isalpha - checks if a characer is alphabetic (returns !0 = true, 0 = false)
isalnum - checks if a character is alphanumeric(alphabet or digit) (returns !0 = true, 0 = false)
ispunct - checks if a character is a punctation (return !0 = true, 0 = false)
isdigit - checks if a character is a digit (returns 1 = true, 0 = false)
isprint - checks if a character is printable (returns !0 = true, 0 = false)
isxdigit - checks whether a character is a hexadecimal digit (returns !0 = true, 0 = false), much better if in boolean data type
islower - similar to string compare, but for checking char lowercase (returns : 2 = true, 0 = false)
isupper - similar to string compare, but for checking char uppercase (returns : 1 = true, 0 = false)

    STRING CONVERSION TO DIGITS
        We can convert string digits into the data type that holds those values, using the standard library and the input and output

    syntax
atoi - returns digits (integers)
strtol - returns digits and can store digits and letters independently | syntax : strtol(var_name, pointer(can be null), base);
         the pointer will be the placeholder for the address of the chars in the string. The base is : if digits = 10; if hexadecimal = 16
atoll - same as atoi but can convert to long long int
atol - same as atoi but can convert to long int
atof - returns floating point data types
strtod 0 similar to strtol but with floating point data types

    The stringtod and stringtol functions are much more safer to use as they allow error checking by assigning the characters left in a pointer
*/

/*
    HEXADECIMAL
        Hex is a method of counting that includes 0-9, a-z, A-Z. They can be reference by the %x format identifier, but this varies.


*/

//---------------------------------FILE-----------------------------------------
/*
        WRITING | APPEND | READ OF FILES
            Presummably, this is systems programming, although in surface level. In here we can create a non-existing file,
            edit an existing one, and read it. The function is in the standard input and output, and there are three modes
            in file manipulation:

        Modes : Write(w), Append(a), Read(r)
        Data type : FILE

    In opening and creating files, we can set it's trajectory by using either a relative or absolute file paths. The relative
    file path is the current file directory of the code this is being written into. The absolute file path is any file location\
    within the system.

    If the pointer doesn't find the file name by having the absolute file path, then it will return a null, otherwise it will return
    a unique address.

    syntax:

    Opening files (relative) : FILE pointer = fopen("file name", "mode") block of code fclose(pointer name);
    Opening files (absolute) : FILE pointer = fopen("directory_file_name"", "mode") ;
    Writing into files : fprintf(pointer_name, "type here"); This works just like printf(i.e \\ reserved characters)(append or write mode)
    Reading files : fgets(buffer, size, pointer) | The buffer is a container for a line of text, you can have all the content of that file
                                                   if you have a while loop to iterate a scan through each line in that file
    fclose(pointer name) - closes/exits the function
    remove("file_name") - returns 0 if success, and returns a non-zero if failed to find the file

    */