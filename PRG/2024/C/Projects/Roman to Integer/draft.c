Simple Roman to Interger Program

I want a string input from the user and then scan their indiviudal char and have an if statement that corresponds to char values
that will assign and add values of each, kinda like a summation. 


Header:
1. Standard input/output
2. String functions
3. --

Algorithm w/o function & w structure
1. Make a structure with a tagname/nickname value and an integer named roman
2. Make the main function and declare the structure and assign a name variable V and make an integer named result
3. In the main function, make an array of characters that's for user input
4. In the main function, prompt the user for a valid string input 
5. In the main function, scan the input using a for loop that has an if statement that checks individual characters and 
their value; if a character is invalid, go back to step four
6. In the valid character that corresponds to an if statement, write a switch statement that scans and assign individual 
characters a value and add the value into the integer result that is considered a summation, and in that also initialize
the value of the corresponding roman numeral using the struc named value
7. print result
8. end


Pseudocode

typedef struc
{
    integer named roman;
} value;

int main()
{
    value V.;
    integer result;
    char roman[];

    printf("Input: ");
    scanf("%s", &roman);

        for(int i = 0; i <= sizeof(roman)/sizeof(roman[0]); i++)
        {
            if(roman[i] > roman[i+1])
            {

            }
        }
        


}

//if highest to lowest, do this:
    //if(roman[0] != 'I' || 'X' || 'C')
    //{

    //}else