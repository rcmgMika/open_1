//------------------------------------------------------------------------------------------------------------------------------------------------------//
//THIS IS THE FINAL PRODUCT








//-----------------------------------------------------------ALGORITHM----------------------------------------------------------------------------------//
/*
1. Include libraries such as standard input and output, and string functions
2. Create a main function consisting of three variables: array of characters and integer, and an integer for result
3. Prompt user for proper string input; make that input to always be in capital letter
4. Convert all the individual characters of that string input into their corresponding number using a for loop; if user inputs foreign, treat it as null
5. Compare the first two indices of the array of integers and the next using a for loop
6. If index 0 is less than index 1, and so on, minus them with the correspoding value; and if index 0 and 1, and so on, are of the same value,
compare index 1 and 2, and so on; if index 1 and 2 are the same or index 2 is greater, then minus index 0 and 1; else add them together
7. Else of no.6, index 0 is greater than index 1, then add their values together
8. Print the output 


*/
//-----------------------------------------------------------PSEUDOCODE---------------------------------------------------------------------------------//
/*

int main(){
    char name[64];
    int digit[64];
    int result;

        printf("Input string: ");
        scanf("valid/invalid string: ");
        strupr(name);

        for(integer i is equal to zero; i less than or equal the size of the inside of the array: name; increment I)
        {
            switch(name)
            {
                case 'i':
                    digit[i] = 1;
                    break;
                case 'V':
                    digit[i] = 5;
                    break;
                case 'X':
                    digit[i] = 10;
                    break;
                case 'L':
                    digit[i] = 50;
                    break;
                case 'C':
                    digit[i] = 100;
                    break;
                case 'D':
                    digit[i] = 500;
                    break;
                case 'M':
                    digit[i] = 1000;
                    break;
                default:
                    digit[i] = 0;
                    break;
            }
        }
        for(integer j is equals to zero; j less than or equal the size of the inside of the array: name; increment j)
        {
            if(index j is less than  index j+1)
            {
                if(index j is equal to 1)
                {
                    result is the difference and equal of 1;
                }else if(index j is equal to 10){
                    result is the difference and equal of 10;
                }else if(index j is equal to 100){
                    result is the differencce and equal of 100;
                }
            }else if(index j is equal to index j+1)
            {
                if(index j+1 is greater than or equal to index j+2)
                {
                    if(index j is equal to 1)
                    {
                        result is the difference and equal of 1;
                    }else if(index j is equal to 10){
                        result is the difference and equal of 10;
                    }else if(index j is equal to 100){
                        result is the differencce and equal of 100;
                    }
                }else if(index j+1 is less than index j+2)
                {
                    if(index j is equal to 1)
                    {
                        result is the sum and equal of 1;
                    }else if(index j is equal to 5){
                        result is the sum and equal of 5;
                    }else if(index j is equal to 10){
                        result is the sum and equal of 10;
                    }else if(index j is equal to 50){
                        result is the sum and equal of 50;
                    }else if(index j is equal to 100){
                        result is the sum and equal of 100;
                    }else if(index j is equal to 500){
                        result is the sum and equal of 500;
                    }else if(index j is equal to 1000){
                        result is the sum and equal of 1000;
                    }
                }else{
                    if(index j is equal to 1)
                    {
                        result is the sum and equal of 1;
                    }else if(index j is equal to 5){
                        result is the sum and equal of 5;
                    }else if(index j is equal to 10){
                        result is the sum and equal of 10;
                    }else if(index j is equal to 50){
                        result is the sum and equal of 50;
                    }else if(index j is equal to 100){
                        result is the sum and equal of 100;
                    }else if(index j is equal to 500){
                        result is the sum and equal of 500;
                    }else if(index j is equal to 1000){
                        result is the sum and equal of 1000;
                    }
                }
            }
        }
        printf("Output: %d", result);


}



*/
//--------------------------------------------------------------CODE------------------------------------------------------------------------------------//
#include <stdio.h>
#include <string.h>


int main()
{
    char name[64];//can only input 2 numeral
    int digit[64];//can only input 2 numeral
    int result;


    printf("Input: ");
    scanf("%s", &name);
    strupr(name);
    
        for(int i = 0; i < sizeof(name)/sizeof(name[0]) - 1; i++)
        {
            switch(name[i])
            {
                case 'I':
                    digit[i] = 1;
                    break;
                case 'V':
                    digit[i] = 5;
                    break;
                case 'X':
                    digit[i] = 10;
                    break;
                case 'L':
                    digit[i] = 50;
                    break;
                case 'C':
                    digit[i] = 100;
                    break;
                case 'D':
                    digit[i] = 500;
                    break;
                case 'M':
                    digit[i] = 1000;
                    break;
                default:
                    digit[i] = 0;
                    break;
            }
        }
        for(int k = 0; k < sizeof(digit)/sizeof(digit[0]) - 1; k++)
        {
            if(digit[k] < digit[k+1])//lowest to highest without repeating numerals
            {
                if(digit[k] == 1)
                {
                    result -= 1;
                }else if(digit[k] == 10){
                    result -= 10;
                }else if(digit[k] == 100){
                    result -= 100;
                }
            }else if(digit[k] == digit[k+1]){//lowest to highest with repeating numerals
                if(digit[k+1] < digit[k+2])//lowest to highest
                {
                    if(digit[k] == 1)
                    {
                        result -= 1;
                    }else if(digit[k] == 10){
                        result -= 10;
                    }else if(digit[k] == 100){
                        result -= 100;
                    }
                }else if(digit[k+1] >= digit[k+2])//highest to lowest
                {
                        if(digit[k] == 1)//highest to lowest
                    {
                        result += 1;
                    }else if(digit[k] == 5){
                        result += 5;
                    }else if(digit[k] == 10){
                        result += 10;
                    }else if(digit[k] == 50){
                        result += 50;
                    }else if(digit[k] == 100){
                        result += 100;
                    }else if(digit[k] == 500){
                        result += 500;
                    }else if(digit[k] == 1000){
                        result += 1000;
                    }
                }
            }else{
                if(digit[k] == 1)//highest to lowest
                {
                    result += 1;
                }else if(digit[k] == 5){
                    result += 5;
                }else if(digit[k] == 10){
                    result += 10;
                }else if(digit[k] == 50){
                    result += 50;
                }else if(digit[k] == 100){
                    result += 100;
                }else if(digit[k] == 500){
                    result += 500;
                }else if(digit[k] == 1000){
                    result += 1000;
                }
            }
        }
          
    printf("Output: %s\n", name);
    /*
    for(int j = 0; j < sizeof(name)/sizeof(name[0]); j++)
    {
        printf("index %d: ", j);
        printf("%d ", digit[j]);
    }*/
    printf("\nResult: %d", result);

    return 0;
}

//------------------------------------past drafts--------------------------------------


//5. In the main function, scan the input using a for loop that has an if statement that checks individual characters and 
//their value; if a character is invalid, go back to step four
//once user inputs data, we scan their individual char from string and then assign values

/*

Problem 3: A program that scans if an individual roman numeral is less than of those that follows it (i.e VX, here V is less than
X, and so we minus them. 5 - 10 = 5), 




*/
//In this version, i've solved the problem of a roman numeral value repeating to add when it does not allign with the size
//of the array of characters(e.g the size of the array is 3 but we only inputted two letters, VI, then the "I", will be 
//repeated once)



/*
typedef struct
{
    int I;
    int V;
    int X;
    int L;
    int C;
    int D;
    int M;
} pip;

int main()
{


char roman[64];//the problem is that my input will depend on the size of this char which is I can only input 3 letters 
//and the computer will not read further resulting in ignorance of my input
//prompt no. of digits
//put that digit on the size of the array of characters

int result;
int gel;
int j = -1;
int add = 1;
pip rumanbisaya = {1, 5, 10, 50, 100, 500, 1000};

    printf("Input Roman Numeral/s: ");
    scanf("%s", &roman);
    //strupr(roman[7]);

    int size = sizeof(roman)/sizeof(roman[0]);
    printf("Size %d", size);
    
    for(int i = 0; i < size; i++)
    {
        if(roman[i] < roman[i+1])//this part is faulty
        {                                 
             switch(roman[i])
            {
                case 'I':
                    result -= rumanbisaya.I;
                    break;
                case 'X':
                    result -= rumanbisaya.X;
                    break;
                case 'C':
                    result -= rumanbisaya.C;
                    break;
            }
        }else//this part is faulty(e.g LV = 5 instead of 55) but the other version works just fine. Why? Is it the nature of negative numbers inside the struct?
        {
            switch(roman[i])
            {
                case 'I':
                    result += rumanbisaya.I;;
                    break;
                case 'V':
                    result += rumanbisaya.V;
                    break;
                case 'X':
                    result += rumanbisaya.X;
                    break;
                case 'L':
                    result += rumanbisaya.L;//this part is faulty(when including 'V' & 'X with this like LV/LX, it doesn't read L)
                    break;
                case 'C': 
                    result += rumanbisaya.C;
                    break;
                case 'D':
                    result += rumanbisaya.D;
                    break;
                case 'M':
                    result += rumanbisaya.M;
                    break;
                //default:
                    //printf("\nSyntax_error\n");
                   // break;
            }
        }
    }
    printf("\nResult: %d", result);
    
    return 0;
}*/






//Converter with prompt of total number of digits in a roman numeral(highest to lowest) and this has no problems at all
/*
typedef struct
{
    int I;
    int V;
    int X;
    int L;
    int C;
    int D;
    int M;
} pip;

int main()
{


char roman[64];//the problem is that my input will depend on the size of this char which is I can only input 3 letters 
//and the computer will not read further resulting in ignorance of my input
//prompt no. of digits
//put that digit on the size of the array of characters

int result = 0;
int gel;
int j = -1;
int add = 1;
pip rumanbisaya = {1, 5, 10, 50, 100, 500, 1000};

    printf("Input Roamn Numeral/s: ");
    scanf("%s", &roman);
    int size = sizeof(roman)/sizeof(roman[0]);
    printf("Size %d", size);
    
    do{
        j += add;
            switch(roman[j])
            {
                case 'I':
                    result += rumanbisaya.I;;
                    break;
                case 'V':
                    result += rumanbisaya.V;
                    break;
                case 'X':
                    result += rumanbisaya.X;
                    break;
                case 'L':
                    result += rumanbisaya.L;
                    break;
                case 'C': 
                    result += rumanbisaya.C;
                    break;
                case 'D':
                    result += rumanbisaya.D;
                    break;
                case 'M':
                    result += rumanbisaya.M;
                    break;
                //default:
                    //printf("\nSyntax_error\n");
                   // break;
            }
            
    }while(j < sizeof(roman)/sizeof(roman[0]));
    printf("\nResult: %d", result);
    
    return 0;
}
*/




//prototype 
//The value of a string or a char in an array of characters depends on their index location. Index 1 = 0, index 2 = 1, ...
//Because of this, my sorting algorithm here that scans individual characters is faulty if I have conditional statements
//And that my idea now is to prompt the user if what he'll input is from lowest to highest or vice versa.
//Or if I find out how to set an individual character a value like when we do in enum, then it may be possible

/*
typedef struct
{
    int Ip;
    int Vp;
    int Xp;
    int Lp;
    int Cp;
    int Dp;
    int Mp;
} pip;

int main()
{


char roman[64];//the problem is that my input will depend on the size of this char which is I can only input 3 letters 
//and the computer will not read further resulting in ignorance of my input
//prompt no. of digits
//put that digit on the size of the array of characters


int result = 0;
int gel;
int j = -1;
int add = 1;
pip rumanbisaya = {1, 5, 10, 50, 100, 500, 1000};

    printf("Input Roamn Numeral/s: ");
    scanf("%s", &roman);
    strupr(roman);
    int size = sizeof(roman)/sizeof(roman[0]);
    printf("Size %d", size);
    
    do{
        j += add;
            if(roman[j] <= roman[j+1])//the problem with this is that when repeated minus, it doesn't read it(e.g iiv = 3 but instead it equals to 5)
            {
                if(roman[j+1] < roman[j+2])
                {
                    switch(roman[j])
                    {
                        case 'I':
                            result -= rumanbisaya.Ip;
                            break;
                        case 'X':
                            result -= rumanbisaya.Xp;
                            break;
                        case 'C':
                            result -= rumanbisaya.Cp;
                            break;
                        case 'V':
                            result += rumanbisaya.Vp;
                            break;
                        case 'L':
                            result += rumanbisaya.Lp;
                            break;
                        case 'D':
                            result += rumanbisaya.Dp;
                            break;
                        case 'M':
                            result += rumanbisaya.Mp;
                            break;
                        default:
                            break;
                    }
                }else if(roman[j+1] > roman[j+2])
                {
                    switch(roman[j])
                    {
                        case 'I':
                            result += rumanbisaya.Ip;
                            break;
                        case 'V':
                            result += rumanbisaya.Vp;
                            break;
                        case 'X':
                            result += rumanbisaya.Xp;
                            break;
                        case 'L':
                            result += rumanbisaya.Lp;
                            break;
                        case 'C': 
                            result += rumanbisaya.Cp;
                            break;
                        case 'D':
                            result += rumanbisaya.Dp;
                            break;
                        case 'M':
                            result += rumanbisaya.Mp;
                            break;
                        default:
                            break;
                    }
                }
            }else{
                switch(roman[j])
                {
                    case 'I':
                        result += rumanbisaya.Ip;
                        break;
                    case 'V':
                        result += rumanbisaya.Vp;
                        break;
                    case 'X':
                        result += rumanbisaya.Xp;
                        break;
                    case 'L':
                        result += rumanbisaya.Lp;
                        break;
                    case 'C': 
                        result += rumanbisaya.Cp;
                        break;
                    case 'D':
                        result += rumanbisaya.Dp;
                        break;
                    case 'M':
                        result += rumanbisaya.Mp;
                        break;
                    //default:
                        //printf("\nSyntax_error\n");
                    // break;
                }
            }
    }while(j < sizeof(roman)/sizeof(roman[0]));
    printf("\nResult: %d", result);
    
    return 0;
}*/

//1. Prompt user for string
//2. Convert that string into digits by using for loop and conditional statements
//3. Put that digit in an integer array
//4. Copy paste the latest version


/*
int main()
{
    char roman[64];
    int digit[64];

        printf("Input string:\t");
        scanf(" %s", &roman);
        //strupr(roman);
            for(int i = 0; i <= sizeof(roman)/sizeof(roman[0]); i++)
            {
                switch(roman[i])
                {
                    case 'I':
                        digit[i] = 1;
                        break;
                    case 'V':
                        digit[i] = 5;
                        break;
                    case 'X':
                        digit[i] = 10;
                        break;
                    case 'L':
                        digit[i] = 50;
                        break;
                    case 'C':
                        digit[i] = 100;
                        break;
                    case 'D':
                        digit[i] = 500;
                        break;
                    case 'M':
                        digit[i] = 1000;
                        break;
                    default:
                        digit[i] = 5;
                        break;
                }
            }
        //for(int j = 0; j <= sizeof(roman)/sizeof(roman[0]); j++)
       // {
         //   printf("%d ", digit);
        //}
       printf("%s", roman);
}
*/






//problem: Size of the arrays matters for the "lowest to highest with repeating numerals"



