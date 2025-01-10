#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*
typedef enum output{I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000} kali;


int main(){

    kali input = I;
    char alphabet = 'A';

  
        for (int i = 0; i < 26; i++){  
            printf("%c ", alphabet);
            alphabet++;
            if(i == 1){
                continue;
            }   
        }
}
*/


//is it the value of abcd or the index location that is the value of a string array?
/**/
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
    char roman[65];
    int digit[65];
    pip rumanbisaya = {1, 5, 10, 50, 100, 500, 1000};
    int result;

        printf("Input string:\t");
        scanf("%s", &roman);
            for(int i = 0; i <= sizeof(roman)/sizeof(roman[0]); i++)
            {
                switch(roman[i])
                {
                    case 'I':
                        digit[i] = rumanbisaya.Ip;
                        break;
                    case 'V':
                        digit[i] = rumanbisaya.Vp;
                        break;
                    case 'X':
                        digit[i] = rumanbisaya.Xp;
                        break;
                    case 'L':
                        digit[i] = rumanbisaya.Lp;
                        break;
                    case 'C':
                        digit[i] = rumanbisaya.Cp;
                        break;
                    case 'D':
                        digit[i] = rumanbisaya.Dp;
                        break;
                    case 'M':
                        digit[i] = rumanbisaya.Mp;
                        break;
                    default://for safe keeping from the overflow or extra non-existent elements in the array
                        digit[i] = '\0';
                        break;
                }
            }*//*
        for(int j = 0; j <= sizeof(roman)/sizeof(roman[0]) - 1; j++)
        {
            if(digit[j] = digit[j+1])//lowest to highest
            {
                if(digit[j+1] < digit[j+2])
                {
                    if(digit[j] = 1)
                    {
                        result -= rumanbisaya.Ip;
                    }else if(digit[j] = 10)
                    {
                        result -= rumanbisaya.Xp;
                    }else if(digit[j] = 100)
                    {
                        result -= rumanbisaya.Cp;
                    }else if(digit[j] = 5)
                    {
                        result += rumanbisaya.Vp;
                    }else if(digit[j] = 50)
                    {
                        result += rumanbisaya.Lp;
                    }else if(digit[j] = 500)
                    {
                        result += rumanbisaya.Dp;
                    }else if(digit[j] = 1000)
                    {
                        result += rumanbisaya.Mp;
                    }else
                    {
                        break;
                    }
                }else//highes to lowest
                {
                    if(digit[j] = 1)
                    {
                        result += rumanbisaya.Ip;
                    }else if(digit[j] = 5)
                    {
                        result += rumanbisaya.Vp;
                    }else if(digit[j] = 10)
                    {
                        result += rumanbisaya.Xp;
                    }else if(digit[j] = 50)
                    {
                        result += rumanbisaya.Lp;
                    }else if(digit[j] = 100)
                    {
                        result += rumanbisaya.Cp;
                    }else if(digit[j] = 500)
                    {
                        result += rumanbisaya.Dp;
                    }else if(digit[j] = 1000)
                    {
                        result += rumanbisaya.Mp;
                    }else
                    {
                        break;
                    }
                }
            }else if(digit[j] < digit[j+1])//lowest to highest
            {
                if(digit[j] = 1)
                    {
                        result -= rumanbisaya.Ip;
                    }else if(digit[j] = 10)
                    {
                        result -= rumanbisaya.Xp;
                    }else if(digit[j] = 100)
                    {
                        result -= rumanbisaya.Cp;
                    }else if(digit[j] = 5)
                    {
                        result += rumanbisaya.Vp;
                    }else if(digit[j] = 50)
                    {
                        result += rumanbisaya.Lp;
                    }else if(digit[j] = 500)
                    {
                        result += rumanbisaya.Dp;
                    }else if(digit[j] = 1000)
                    {
                        result += rumanbisaya.Mp;
                    }else
                    {
                        break;
                    }
            }else
            {
                if(digit[j] = 1)
                    {
                        result += rumanbisaya.Ip;
                    }else if(digit[j] = 5)
                    {
                        result += rumanbisaya.Vp;
                    }else if(digit[j] = 10)
                    {
                        result += rumanbisaya.Xp;
                    }else if(digit[j] = 50)
                    {
                        result += rumanbisaya.Lp;
                    }else if(digit[j] = 100)
                    {
                        result += rumanbisaya.Cp;
                    }else if(digit[j] = 500)
                    {
                        result += rumanbisaya.Dp;
                    }else if(digit[j] = 1000)
                    {
                        result += rumanbisaya.Mp;
                    }else
                    {
                        break;
                    }
            }
        }
        printf("\nResult: %d\n", result);
*//*
        for(int k = 0; k < sizeof(digit)/sizeof(digit[0]); k++)
        {
            printf("%d ", digit);
        }
}*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[64];
    int digit[64];
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
            if(digit[k] < digit[k+1])
            {
                if(digit[k] == 1)
                {
                    result -= 1;
                }else if(digit[k] == 10){
                    result -= 10;
                }else if(digit[k] == 100){
                    result -= 100;
                }
            }else if(digit[k] == digit[k+1]){
                if(digit[k+1] < digit[k+2])
                {
                        if(digit[k] == 1)
                    {
                        result -= 1;
                    }else if(digit[k] == 10){
                        result -= 10;
                    }else if(digit[k] == 100){
                        result -= 100;
                    }
                }else if(digit[k+1] >= digit[k+2])
                {
                        if(digit[k] == 1)
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
    printf("\nResult: %d", result);

    return 0;
}
