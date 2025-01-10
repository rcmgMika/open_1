
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char player1[64], player2[64], player3[64], player4[64];
char guess1[64], guess2[64], guess3[64], guess4[64];


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
///*
void win(char i[]){

    
    for(int i = 0; i < 3; i++)
    {
        int g = strcmp(i, "GREEN");

    }
        
}
//*/
int main()
{
const int r = 0;
char pull[64];
do{
    int no[] = {1, 2, 3, 4, 5, 6};
    int guessp[4];
    int size = sizeof(no)/sizeof(no[0]);
    
/*
    printf("Enter player 1 name: ");
    scanf("%s", &player1);
    printf("Enter player 1 guess: ");
    scanf("%s", &guess1);
    strupr(guess1);

    printf("Enter player 2 name: ");
    scanf("%s", &player2);
    printf("Enter player 2 guess: ");
    scanf("%s", &guess2);
    strupr(guess2);

    printf("Enter player 3 name: ");
    scanf("%s", &player3);
    printf("Enter player 3 guess: ");
    scanf("%s", &guess3);
    strupr(guess3);

    printf("Enter player 4 name: ");
    scanf("%s", &player4);
    printf("Enter player 4 guess: ");
    scanf("%s", &guess4);
    strupr(guess4);
    printf("\n");
*/
    printf("\n\nType i and enter to pull! ");
    scanf("%s", pull);

    shuffle(no, size);
    printf("Winning Colors: ");
    for(int i = 0; i < 3; i++){
    switch(no[i]){
            case 1:
                printf("Green| ");
                break;           
            case 2:
                printf("Yellow| ");
                break;
            case 3: 
                printf("Red| ");
                break;
            case 4: 
                printf("Blue| ");
                break;
            case 5:
                printf("Pink| ");
                break;
            case 6:
                printf("White| ");
                break;
        }
    
    }
    /*
    for(int l = 0; l < 4; l++){
        if(guessp[0] == 1 || guessp[0] == 2 || guessp[0] == 3 || guessp[0] == 4 || guessp[0] == 5 || guessp[0] == 6){
            printf("\n%s wins! ", player1);
        }else if(guessp[1] == 1 || guessp[1] == 2 || guessp[1] == 3 || guessp[1] == 4 || guessp[1] == 5 || guessp[1] == 6){
            printf("%s wins! ", player2);
        }else if(guessp[2] == 1 || guessp[2] == 2 || guessp[2] == 3 || guessp[2] == 4 || guessp[2] == 5 || guessp[2] == 6){
            printf("%s wins! ", player3);
        }else if(guessp[3] == 1 || guessp[3] == 2 || guessp[3] == 3 || guessp[3] == 4 || guessp[3] == 5 || guessp[3] == 6){
            printf("%s wins! ", player4);
        }
    }
*/
}while(r == 0);
    return 0;
}



/* version 2 - working

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


char* (*gNum())[64]{//returns a pointer and doesn't have parameters. This is a function that has an array as its 
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
        return colorp;
}
    int main(){
        char* (*pPilot)[64] = gNum();
        char player[5][64], color[6][64];
        char guess[5][64];
            for(int i=0; i<5; i++){//input player names
                printf("Enter player %d: ", i+1);
                scanf("%s", &player[i]);
                printf("Player %d: %s\n", i+1, player[i]);
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
*/
