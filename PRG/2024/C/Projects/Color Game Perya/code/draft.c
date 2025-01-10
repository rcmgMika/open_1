#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int pilot[3];
char *colorp[3][64];//assigns only an address as this is a pointer and not a dereferenced value
//for memory manipulation
char green[] = "GREEN";
char yellow[] = "YELLOW";
char pink[] = "PINK";
char white[] = "WHITE";
char blue[] = "BLUE";
char red[] = "RED";


char* (*gNum())[64]{
//This is a function that hosts a return type of a pointer row in a two dimensional array
/* Explanation
    char* - data type pointer
    (*gnum()) - gnum becomes a pointer and has the parameters of a function
    [64] - pertains to how many elements from the char* we'll get
    Essentially, the representation of this 2 dimensional array:
        row
         |
      collumn
      /  |  \
addresses of everything

    - we have created a function that is a pointer that hosts the "row" in which it will get everything, just like in making a function
      with a 1 dimentional array.
*/
//returns a pointer and doesn't have parameters. This is a function that has an array as its 
//this function initialization is actually: return_type pointer_array_to_return_type size_of_that_pointer_array
//ps. the return type acts as the identifier/data type of the array
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
        return colorp;//returns the row pointer
}
    int main(){
        char* (*pPilot)[64] = gNum();//hosts the pointer for a row in a two dimensional array
        char player[5][64], color[6][64];
        char guess[5][64];
            for(int i=0; i<5; i++){//input player names
                printf("Enter player %d: ", i+1);
                scanf("%s", &player[i]);
            }
            printf("Colors:\n\t\t[GREEN] | [YELLOW] | [PINK] | [WHITE] | [BLUE] | [RED]\n");
            for(int i=0; i<5; i++){//input player guesses
                printf("\tEnter %s color guess: ", player[i]);
                scanf("%s", &guess[i]);
                strupr(guess[i]);
            }
            printf("\n\n\n------------------------Winners---------------------------\n");
            for(int i=0; i<5; i++){//gets the winner
                if(memcmp(guess[i], pPilot[0], sizeof(pPilot)) == 0 || memcmp(guess[i], pPilot[1], sizeof(pPilot)) == 0 || memcmp(guess[i], pPilot[2], sizeof(pPilot)) == 0){
                    printf("- %s!\n", player[i]);
                }
            }
            printf("Colors won: ");
            for(int i=0; i<3; i++){
                printf("%s ", pPilot[i]);
            }
    return 0;
}
