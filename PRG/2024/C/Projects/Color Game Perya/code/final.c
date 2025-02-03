/* Algorithm
    1. Initialize specific global variables for a function: a string of 2d array, and all the color spectrum in the game
    2. Make a function that manipulates the global variables to randomize the results
    3. (start of loop) Ask for 5 player names
    4. Ask for 5 guesses related from the 5 players
    5. Print out the winners of the game
    6. Print out the 3 randomized color that won the game
    7. Ask for user input regarding to play or exit
    7.1 if play, continue with the program
    7.2 if exist, break the loop

----------------------------------------------------------------------------------------------------------------------------------------------
Essentials (klayd para maexplain mo lahat) - keywords

"memcpy" - memory manipulation functions

"pointer" or "*" - a variable that stores memory addresses

memory address - the address of a data in a specific memory or ram

"parameters" - yung ilalagay na value sa function para imanipulate

"seed" - essential para magproduce ng different outputs ng randomizer, isipin mo nalang na lagayan to pre 
         at sa bawat pag continue ng loop sa program, nagbabago ka ng lagayan

*/


#include <stdio.h>
#include <time.h>//for srand (para sa pag produce ng mga seed)
#include <stdlib.h>
#include <string.h>

//designs lang to klayd
#define design1 "==========================================================\n"
#define design2 "----------------------------------------------------------\n"

void instructions(){//description ng sugal
    printf(design1);
    printf("               WELCOME TO THE COLOR GUESSING GAME\n");
    printf(design1);
    printf("INSTRUCTIONS:\n");
    printf("1. 5 players will guess colors from the list below.\n");
    printf("2. Please enter your guesses in UPPERCASE (e.g., GREEN).\n");
    printf("3. If your guess matches any of the winning colors, you win!\n");
    printf(design2);
    printf("Available Colors: [GREEN], [YELLOW], [PINK], [WHITE], [BLUE], [RED]\n");
    printf(design1);
}

//global variables sabihin mo dito pre
int pilot[3];
char *colorp[3][64];
char green[] = "GREEN";
char yellow[] = "YELLOW";
char pink[] = "PINK";
char white[] = "WHITE";
char blue[] = "BLUE";
char red[] = "RED";


//dito naman, sabihin mo na kaya mayroon na pointer na char ay ang purpose non is to return a 2 dimensional array
/* Explanation
    char* - data type pointer
    (*gnum()) - gnum becomes a pointer and has the parameters of a function, although walang parameters
    [64] - pertains to how many elements from the char* we'll get
    Essentially, the representation of this 2 dimensional array:
        row
         |
      collumn
      /  |  \
addresses of everything(memory address)
*/
char* (*gNum())[64]{
        srand(time(NULL));
        for(int i=0; i<3; i++){
            pilot[i] = (rand() % 6) + 1;
                switch(pilot[i]){
                        case 1: 
                            memcpy(&(colorp[i]), green, sizeof(green));
                            break;
                        case 2:
                            memcpy(&(colorp[i]), yellow, sizeof(yellow));
                            break;
                        case 3:
                            memcpy(&(colorp[i]), pink, sizeof(pink));
                            break;
                        case 4:
                            memcpy(&(colorp[i]), white, sizeof(white));
                            break;
                        case 5:
                            memcpy(&(colorp[i]), blue, sizeof(blue));
                            break;
                        case 6:
                            memcpy(&(colorp[i]), red, sizeof(red));
                            break;
        }
        }
        return colorp;
}

    int main(){
        char* (*pPilot)[64] = gNum(); //hosts the pointer for a row in a two dimensional array or dito nirereturn nung function or binibigay (variable assignment lang to klayd)
        char dump[10];

        while(1){
            instructions(); //function call para sa instructions sa laro
            char player[5][64], color[6][64];
            char guess[5][64];

            for(int i=0; i<5; i++){//klayd dito magiinput kung sino maglalaro
                printf("Enter player %d: ", i+1);
                scanf("%s", &player[i]);
            }
            printf(design1);//tignan niyo yung define statements sa itaas, para lang sa design ng code to

            printf("Colors:\n\t\t[GREEN] | [YELLOW] | [PINK] | [WHITE] | [BLUE] | [RED]\n");//dito na magguguest ng mga kulay yung players
            for(int i=0; i<5; i++){
                printf("\tEnter %s color guess: ", player[i]);
                scanf("%s", &guess[i]);
                strupr(guess[i]);
            }

            printf(design1);

            printf("------------------------Winners---------------------------\n");//dito na sasabihin yung mga nanalo
            for(int i=0; i<5; i++){
                if(memcmp(guess[i], pPilot[0], sizeof(pPilot)) == 0 || memcmp(guess[i], pPilot[1], sizeof(pPilot)) == 0 || memcmp(guess[i], pPilot[2], sizeof(pPilot)) == 0){
                    printf("- %s!\n", player[i]);
                }
            }

            printf("Colors won: ");//dito na ipapakita yung mga tumamang colors
            for(int i=0; i<3; i++){
                printf("%s ", pPilot[i]);
            }

            printf("\n"design1);

            printf("press [y] to continue and [n] to exit: "); scanf("%s", &dump);//dito na magbrbreak yung while loop kapag nag no
            if(!strcmp(dump, "n")){break;}

            printf("\n\n\n");
        }
    return 0;
}
