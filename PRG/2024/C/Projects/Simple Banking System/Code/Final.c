#include <stdio.h>
#include <string.h>
#include <unistd.h>

int digit_calc(int x, int y);
void sleep_(int x);

typedef struct info{int _compare; int _compare2; char compare[64]; char yesno[64]; char question[64]; char username[64]; char pin[64]; int pin_; int n; int count; int user_interface; int amount_scan; int amount; int total; int deposit; int withdraw_money;} input;

int main()
{


input individual1;
input individual2;
input compare;
individual1.count = 0;
strcpy(individual2.yesno, "NO");
input existing;
strcpy(existing.username, "rob");
strcpy(existing.pin, "123456");
existing.amount = 100;
int o;


    printf("Do you have an account? ");
    scanf("%s", &individual1.question);
    strupr(individual1.question);
    individual1._compare = strcmp(individual1.question, individual2.yesno);

        if(individual1._compare == 0)
        {
            printf("Input Username: ");
            scanf("%s", &individual1.username);

            do{
                printf("Input 6 Digit Pin: ");//problem: When inputting letters, infinite loop happens
                scanf("%d", &individual1.pin_);
                individual1.n = individual1.pin_;
                individual1.count = 0;
                
                    o = digit_calc(individual1.n, individual1.count);

                        if(o == 6){
                                printf("\nVerifying, please wait");
                                        sleep_(3);
                                        printf("\n\nVerified successfully. The account has been created!\n\n");
                        }else{
                            printf("\nInvalid input. Try again.\n");
                        }
                        }while(o != 6);
        }else if(individual1._compare == 1)
        {
            printf("Proceeding to log in page");
            sleep_(3);
            printf("\n\nProceeded to log in page successfully!");

            do{
            	printf("\nEnter valid username: ");
                scanf("%s", &compare.username);
                compare._compare = strcmp(compare.username, existing.username);

                printf("Enter valid pin: ");
                scanf("%s", &compare.pin);
                compare._compare2 = strcmp(compare.pin, existing.pin);

                    if(compare._compare2 == 0 && compare._compare2 == 0){
                        printf("\nLogged in successfully! Proceeding to log in page");
                        sleep_(3);
                        printf("\nProceeded successfully! Now where do you want to go?\n[Deposit] - 1\t[Withdraw] - 2\t[Account Balance] = 3: ");
                        scanf("%d", &compare.user_interface);
                            switch(compare.user_interface){
                                case 1:
                                    printf("Enter amount to deposit: ");
                                    scanf("%d", &compare.deposit);
                                    compare.total = compare.deposit + existing.amount;
                                    printf("\nDeposited successfully!");
                                    break;
                                case 2:
                                    do{
                                        printf("Enter amount to withdraw: ");
                                        scanf("%d", &existing.amount_scan);
                                            if(existing.amount_scan <= existing.amount){
                                                compare.total = existing.amount - existing.amount_scan;
                                                printf("Please wait");
                                                sleep_(3); 
                                                printf("\nWithdrawn successfully! Balance: %d\n", compare.total);
                                            }else{
                                                printf("\nInvalid input. Please try again.");
                                            }
                                    }while(existing.amount_scan > existing.amount);
                                    break;
                                case 3: 
                                    printf("Checking account balance");
                                    sleep_(3);
                                    printf("\nAccount balance: %d", existing.amount);
                                    break;
                                default:
                                    printf("Invalid input. Try again.\n");
                            }
                    }else{
                        printf("Input incorrectly!\n");
                    }
            }while(compare._compare == -1 || compare._compare2 == -1);
        }else{
        	printf("\nInvalid input.");   
        }

    return 0;
}

int digit_calc(int x, int y){
    while(x != 0){
        x = x/10;
        y++;
    }
    return y;
}
void sleep_(int x){
    for(int f=0;f<x;f++){
        sleep(1);
        printf(".");
    }
    sleep(1);
}