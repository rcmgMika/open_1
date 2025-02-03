#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

//50:00 minutes into the video, This is a compilation of all the things I learned in this time frame
//Variables
//Escape Sequences
//Format Specifiers
//Operations
//Type Cast
//Constant
//User Input
//Ascii Table

//Project 1: Introductory and good morning message thru user input
/*
int main(){
  /*
    char intro1[64];
    printf("Hello! \n");
    scanf("%64s", &intro1);
    printf("Wonderful!\t My name is C, what\'s your name? \n");

    char intro2[64];
    scanf("%s", &intro2);
    printf("What a lovely name that is. \"%s\"! \n", intro2);
    printf("Anyway, how are you today?\n");

    char intro3[64];
    scanf("%s", &intro3);
    printf("I cannot specifically know what you inputs are, but I shall see someday.");
    printf(" And anyway, good day!\n");
    printf("Ask me anything!");
*/

//Project 2: Operation-add with variables thru user input 
/*
    int x;
    printf("Add value here for x: ");
    scanf("%d", &x);

    int y;
    printf("Add value here for y: ");
    scanf("%d", &y);

    int result = (x + y);
    printf("Do you want to print the result? Well you have no choice but to type \"Y\"\n");
    char gg[64];
    scanf("%s", &gg);
    printf("Here is the sum: %d", result);
*/


//Project 3: Operations with results of variables thru user input
/*
 int x;
    printf("Add value here for x: ");
    scanf("%d", &x);

    int y;
    printf("Add value here for y: ");
    scanf("%d", &y);

    int result = (x + y);
    printf("Do you want to print the result? Well you have no choice but to type \"Y\"\n");
    char gg[64];
    scanf("%s", &gg);
    printf("Here is the sum: %d\n", result);

    char gg1[54];
    printf("Proceed to get the sum of two results \[Y\\N]\n");
    scanf("%s", gg1);

    int result2 = (result + result);
    printf("Here is the sum of two results: %d", result2);
*/

//Project 4: Complete other operations, starting with char, with user input

//+char as a character - Cannot concatenate chars, however there is a function called strcat that can.
/*char x[] = "L";
char y[] = "Y";
char b[] = (x + y);
printf("%s", b);
*/

//char as a character with user input
/*
    char p;
    printf("Type \"Y\" to define char: \n");
    scanf("%c", &p);
    printf("The char is %c", p);
*/

/*trying to add string to string, must see augmented assignment u
char name[32] = "Robby";

printf("%s", name);
*/

//Char as an integer with user input & non
/*
    char var1;
    printf("What would you like to have \"char 1\" to have a value?\t");
    scanf("%d", &var1);

    char var2;
    printf("What would you like to have \"char 2\" to have a value?\t");
    scanf("%d", &var2);

char result1 = var1 - var2;

    char problemSolver1[64];
    printf("Would you like to operate with minus the char 1 and 2? Type \"Y\"\t");
    scanf("%s", &problemSolver1);

    printf("\nThe result is %d", result1);

char str1[64];
printf("\n\nWould you like a different operator and number? Type \"Y\"\t");
scanf("%s", &str1);

    char var3;
    printf("\nWhat would you like to have \"char 3\" to have a value?\t");
    scanf("%d", &var3);

    char var4;
    printf("What would you like to have \"char 4\" to have a value?\t");
    scanf("%d", &var4);

    char result2 = var3 * var4;

    char problemSolver2[64];
    printf("Would you like to operate with minus the char 3 and 4? Type \"Y\"\t");
    scanf("%s", problemSolver2);

    printf("\nThe result is %d", result2);
*/

//The problem that this code above faced is that its user inputs were not displaying or letting the user input
//something because there were unrelated inputs between the code and the user in which the code asks for a char 
//character and the user inputs strings, it only worked by having only the block of codes of related codes or
//the relation between what the user inputs and what the code can only be inputted. 
//Both user and computer must want the same thing!
//And it matters where you put the user input function as it will be displayed as its place in its line
//The user input function acts as a print statement in which it follows the before print statement 
//but with an escape sequence \n at the last          

//Char referencing to ascii table with multiplication
 /*
    const char var1;
    const char var2;

    printf("Var1 input:\t");
    scanf("%d", &var1);
    printf("Output:\t%c\n", var1);

    printf("Var2 input:\t");
    scanf("%d", &var2);
    printf("Output:\t%c\n", var2);

    char pr[64];
    printf("Would you like to know the product?\t");
    scanf("%s", &pr);

    int result1 = var1 * var2;
    printf("The product is: %d", result1);
// The problem with this code is that its product equals to zero. My guess is that it cannot read
//both what the user inputs and the correspoding ascii table output. Solutions might be knowing how
//the information put in a variable can retain it's correspoding ascii output.
*/

//Char as an int and str multiplied together
 /*
    char int1;
    char str[32];

    printf("Input for int: ");
    scanf("%d", &int1);
    printf("Input for str1: ");
    scanf("%32s", &str);

    char result[32] = (int)int1 * str[32];
    printf("Output:\t%s", result);
*/
// you cannot multiply a string of text to an integer, but you can have a string of text be repeated a certain
//number of times from for loops


//Project #5: Subtraction in float and double
/*
    double var1 = 34.990906;
    double var2 = 43.9434394994949494;

    double resultVar = var1 - var2;
    printf("%.15lf", resultVar);
*/
//the accuracy if floats and doubles are in the same operation depends solely on the float's precision, 
//and the precision of the double will not precede the float. in short, the float has supremacy


//Project#6 Subtraction and multiplication 
/*
int var1 = 65;
int var2 = 54;

    int result1 = var1 - var2;
    int result2 = var1 * var2;

printf("Output: %d\n", result1);
printf("Output: %d\n", result2);
*/


//Project# 7: Unsigned long long int multiplication
/*
unsigned long long int var1 = 736534545345345786;
unsigned long long int var2 = 498334800984820988;
long long int var3 = 42764897329845472894793874855555555559u;

unsigned long long int result1 = var1 * var2;
 printf("%llu", result1);
*/

//Project# 8: Getting the quotient of two integers
/*
int var1 = 3;
int var2 = 9;

float result1 = (float) var1 / var2;
printf("%f", result1);
*/



//Project# 9: Function for Newton's Square root formula

//I can actually just make this into a one simple function
/*
double Xn(double n)
{
    double Xn0 = (n+1) / 2;
    return Xn0;//solves for Xn
}
double Xn1(double n, double result)
{
    double Xn1 = .5 * (result + (n/result));
    return (double) Xn1;
}
//The number of function corresponds to the number of repetitions because of the changes in value of Xn1
double Xn2(double n, double finalResult)
{
    double Xn2 = .5 * (finalResult + (n/finalResult));
    return (double) Xn2;
}
double Xn3(double n, double finalResult2)
{
    double Xn3 = .5 * (finalResult2 + (n/finalResult2));
    return (double) Xn3;
}
double Xn4(double n, double finalResult3)
{
    double Xn4 = .5 * (finalResult3 + (n/finalResult3));
    return (double) Xn4;
}
double Xn5(double n, double finalResult4)
{
    double Xn5 = .5 * (finalResult4 + (n/finalResult4));
    return (double) Xn5;
}
double Xn6(double n, double finalResult5)
{
    double Xn6 = .5 * (finalResult5 + (n/finalResult5));
    return (double) Xn6;
}
double Xn7(double n, double finalResult6)
{
    double Xn7 = .5 * (finalResult6 + (n/finalResult6));
    return (double) Xn7;
}
double Xn8(double n, double finalResult7)
{
    double Xn8 = .5 * (finalResult7 + (n/finalResult7));
    return (double) Xn8;
}
double Xn9(double n, double finalResult8)
{
    double Xn9 = .5 * (finalResult8 + (n/finalResult8));
    return (double) Xn9;
}
double Xn10(double n, double finalResult9)
{
    double Xn9 = .5 * (finalResult9 + (n/finalResult9));
    return (double) Xn9;
}

int main()
{
double n;
int no;

    printf("Input number to square root: ");
    scanf("%lf", &n);
        printf("Great! Now input how many repetitions needed up to 10(the decimals will vary and the precision): ");
        scanf("%d", &no);

//standard
double result = Xn(n);
double finalResult = Xn1(n, result);
double finalResult2 = Xn2(n, finalResult);
double finalResult3 = Xn3(n, finalResult2);
double finalResult4 = Xn4(n, finalResult3);
double finalResult5 = Xn5(n, finalResult4);
double finalResult6 = Xn6(n, finalResult5);
double finalResult7 = Xn7(n, finalResult6);
double finalResult8 = Xn8(n, finalResult7);
double finalResult9 = Xn9(n, finalResult8);
double finalResult10 = Xn10(n, finalResult9);


            switch(no){
                case 1:
                    printf("\n\nOutput: %.15lf", finalResult);
                    break;
                case 2:
                    printf("\n\nOutput: %.15lf", finalResult2);
                    break;
                case 3:
                    printf("\n\nOutput: %.15lf", finalResult3);
                    break;
                case 4:
                    printf("\n\nOutput: %.15lf", finalResult4);
                    break;
                case 5:
                    printf("\n\nOutput: %.15lf", finalResult5);
                    break;
                case 6:
                    printf("\n\nOutput: %.15lf", finalResult6);
                    break;
                case 7:
                    printf("\n\nOutput: %.15lf", finalResult7);
                    break;
                case 8:
                    printf("\n\nOutput: %.15lf", finalResult8);
                    break;
                case 9:
                    printf("\n\nOutput: %.15lf", finalResult9);
                    break;
                case 10:
                    printf("\n\nOutput: %.15lf", finalResult10);
                    break;
                default:
                    printf("Invalid input!");
                
            }
}
*/

//Boolean converter to true or false - this function prints true or false instead of 1 or 0 in which the function bool(boolean) prints
/*
char boolStr(int y)
{
    if (y != 0){
        printf("true");
    }
    else{
        printf("false");
    }
}
*/

//PI calculator

//Index location locator - searching algorithm: binary method




//Randomizes Array Elements
/*
void shuffle(int array[], int size)//always define if that is an array!
{
    srand(time(NULL));

    for(int i = size - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);//if we don't have a minus 1 in the condition of the for loop, this sum will be 10 and we'll be referencing a non-existent value
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8 , 9};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Output size: %d\n", size);

    shuffle(array, size);
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
*/

// Random Number Guessing Game
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Random Number Guessing Game
    const int min = 1;
    const int max = 3;
    int correct = 0, answer[3], guesses[3] = {1, 2, 3};
    int guess[3];
    srand(time(NULL));
        for(int i = 0; i <sizeof(answer)/sizeof(answer[0]); i++){
            answer[i] = (rand() % max) + 1;
            printf("[ ");
                    for(int j = 0; j < 3; j++){
                        printf("%d ", guesses[j]);
                    }
            printf("]\n");
                printf("Enter guess: ");
                scanf("%d", &guess[i]);
                if(guess[i] == answer[i]){
                    correct++;
                }
        }
            printf("Your correct answers are: %d/3", correct);
}
*/

/* Calculates the area of the pendagon

#include <stdio.h>
#include <math.h>
int main(){
    
    
    int s;
        printf("Enter side: ");
        scanf("%d", &s);
        double result = 1/4.0 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(s, 2);
        printf("Area of Pentagon: %.2lf", result);

    return 0;
}

*/

/* SORT ARRAY
void sort(int* array, int size){
for(int j = 0; j < size-1; j++){//to ensure preciseness
    for(int i = 0; i < size-1; i++){//the minus 1 is to prevent the for loop to access a non-existent index in the array
        if(array[i] < array[i+1]){
           int temp = array[i];
           array[i] = array[i+1];
           array[i+1] = temp;
        }
    }
}
}
    int main(){
        int array[] = {1, 2, 3};
        sort(array, sizeof(array)/sizeof(array[0]));
        printf("\nSort size: %d\n", sizeof(array)/sizeof(array[0]));
            for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
                printf("%d ", array[i]);
            }
}
*/


/* UNSORT ARRAY
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void unsort(int p[], int size){
    srand(time(NULL));
        for(int i = 0; i < size-1; i++){
            for(int j = 0; j < size-1; j++){
                int random = (rand() % size);
                int temp = p[j]; p[j] = p[random]; p[random] = temp;//only one index array will be randomized
            }
        }
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    unsort(array, sizeof(array)/sizeof(array[0]));
        for(int j = 0; j < sizeof(array)/sizeof(array[0]); j++){
            printf("%d ", array[j]);
        }
}
*/


// 2 DIMENSIONAL ARRAY COUNTER
/*  
#include <stdio.h>

int cout(int p[][64], int row, int column){//we have to initialize the column of the array, and it's parameters are simple...
    int firstgroup = 0, secondgroup = 0, count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", p[i][j]);
            count++;
            printf("count: %d\n", count);
            if(p[i][j] != 0 && count < 65){
                firstgroup++;
            }else if(p[i][j] != 0){
                secondgroup++;
            }
        }
    }
    int total = firstgroup + secondgroup; 
    printf("\nRow 1: %d\nRow 2: %d\nTotal: %d\n", firstgroup, secondgroup, total);
    return firstgroup;
}

int main(){
    int number[][64] = {{1, 2, 3}, {4, 5, 6, 7}};
    int row = sizeof(number)/sizeof(number[0]); 
    int column = sizeof(number[0])/sizeof(number[0][0]); 
    printf("\ncolumn: %d\n", column);
    
        int count = cout(number, row, column);
        printf("\nCount: %d", count);

    return 0;
}
*/

/*
//FILE DATA ASSIGNMENT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char buffer[128];
    //char plcholder[128][128];
    char p[128][128];
    int i = 0, j = 0, end = 0;
        FILE *file = fopen("C:\\Users\\R. Garcia\\Downloads\\Test for lazyvim\\runme.c", "r");
            while(fgets(buffer, sizeof(buffer), file) != NULL){//what does this fgets return???
                j++;
                strcpy(p[j-1], buffer);
               printf("%s", buffer);
            }
            printf("Size of plcholoer: %d\n", sizeof(p));
            for(int i = 0; i < sizeof(p)/sizeof(p[0]); i++){
                if(p[0][i] != 0){
                    printf("%s", p[i]);
                }else{
                    printf("null");
                }
            }
    fclose(file);
}
this program will produce random codes if the if statement: if(p[i] != 0) is like this, as this will never be false because it checks every row memory locations.
However if we take into account that the 2nd dimensional string only has 1 row, and initialize that, then that condition can now be false as all the 
contents of that row will either be null or not. We actually go over the different rows if that isn't initialized, and thus it doesn't treat the values
as null as they're not null. And this is also why my else statement from it never works.
*/

/* Array minimum finder

#include <stdio.h>

int main(){
    int arr[] = {7, 2, 9, 4, 0, 1, 5}, counter = 0, minimum;
    int size = sizeof(arr)/sizeof(arr[0]);

    minimum = arr[counter];
    for(int i = 0; i < size; i++){
        if(arr[counter] < arr[i]){
            continue;
        }
        counter = i;
        minimum = arr[counter];
    }


    
    printf("\n\n%d", minimum);
}


*/


//Duplicate finder

/*
#include <stdio.h>
int main(){

    int arr[] = {1, 2, 3, 3, 4, 5, 6, 7, 2, 6, 7, 7}, counter;
    int length = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < length; i++){
        counter = 0;

        for(int j = 0; j < i; j++){//forward but from backward scan
            if(arr[i] == arr[j]){
                counter = 1;
                break;
            }
        }

        if(!counter){//forward scan from the latest i
            for(int j = i+1; j < length; j++){
                if(arr[i] == arr[j]){
                    printf("%d, ", arr[i]);
                    break;
                }
            }
        }
    }
}
*/