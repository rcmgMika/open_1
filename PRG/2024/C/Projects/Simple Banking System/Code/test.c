#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*
typedef struct tagnamess{int compare; char program_0[64]; char yeno[64]; char universal[64]; int universal2; int count;} loll;

int main()
{
loll input;//program 2
loll input2;
input.count = 0;



strcpy(input2.yeno, "NO");


    printf("Do you have an account? ");
    scanf("%s", &input.program_0);
    strupr(input.program_0);
    input.compare = strcmp(input.yeno, input2.yeno);
    printf("output of input compare: %d\n", input.compare);

        if(input.compare == 1)//sign up
        {
            printf("Input username: ");
            scanf("%s", &input.universal);
            printf("Input 6 digit pin: ");
            scanf("%d", &input.universal2);
            printf("Input in pin: %d\n", input.universal2);

            while(input.universal2!=0)
            {
                input.universal2=input.universal2/10;
                input.count++;
            }
            printf("Digit: %d\n", input.count);

                //if(sizeof(input.universal)/sizeof(input.universal[0]) != sizeof(input.universal)/sizeof(input.universal[0]))//fault, referencing a non-existent value
                if(input.count != 6)
                {
                    while(input.count != 6)
                    {
                    printf("Try again\nPlease enter 6 digit pin: ");
                    scanf("%d", &input.universal2);
                    input.count = 0;

                        while(input.universal2!=0)
                        {
                            input.universal2=input.universal2/10;
                            input.count++;
                            printf("Digit: %d\n", input.count);
                        }
                        if(input.count == 6)
                        {
                            printf("The account has been successfully created!");
                        }
                    }
                    
                }else{
                    printf("The accound has been successfully created!\n");
                }
        }else if(input.compare == -1){
            printf("Proceed to log in page.\n");
        }
        
}  
*/

int digit_calc(int x, int y);
void sleep_(int x);

typedef struct info{int _compare; int _compare2; char compare[64]; char yesno[64]; char question[64]; char username[64]; char pin[64]; int n; int count; int user_interface; int amount_scan; int amount; int total; int deposit; int withdraw_money;} input;

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
    printf("Output of question: %d\n", individual1._compare);

        if(individual1._compare == 0)
        {
            printf("Input Username: ");
            scanf("%s", &individual1.username);

            do{
                printf("Input 6 Digit Pin: ");//problem: When inputting letters, infinite loop happens
                scanf("%d", &individual1.pin[1]);
                individual1.n = individual1.pin[1];
                individual1.count = 0;
                
                    o = digit_calc(individual1.n, individual1.count);
                    printf("\ndigit: %d", o);

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
            printf("Proceeding to log in page\n");
            //sleep_(3);
            printf("\n\nProceeded to log in page successfully!");

            do{
            	printf("\nEnter valid username: ");
                scanf("%s", &compare.username);
                    printf("Output of valid username: %s\n", compare.username);
                compare._compare = strcmp(compare.username, existing.username);
            	printf("\nOutput of compare: %d\n", compare._compare);

                printf("Enter valid pin: ");
                scanf("%s", &compare.pin);
                    printf("Output of valid username: %s\n", compare.pin);
                compare._compare2 = strcmp(compare.pin, existing.pin);
                printf("Output of compare2: %d\n", compare._compare2);

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
                                    printf("Deposited successfully!");
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


/*
typedef struct info{
    int _compare; char yesno[64]; char question[64]; char username[64]; int pin[64]; int n; int count; char user_interface[64]; int ammount_scan; int ammount; int deposit; int withdraw_money;} input;

int main(){
input individual1;
input individual2;
input compare;
individual1.count = 0;
strcpy(individual2.yesno, "NO");
input existing =  {1, '\0', "YES", "robby.garcia1006@gmail.com", 111111, 111111, 6};
existing.ammount = 100;

    printf("Do you have an account? ");
    scanf("%s", individual1.question);
    individual1._compare = strcmp(individual1.question, individual2.yesno);
        if(individual1._compare == 0)
        {
            printf("Input Username: ");
            scanf("%s", &individual1.username);

            do{
                printf("Input 6 digit pin: ");
                scanf("%d", &individual1.pin[1]);
                individual1.n = individual1[1];
                    while(individual1.n != 0){
                        individual1.n = individual1.n/10;
                        individual1.count++;
                    }
                        if(individual1.count != 6){
                            printf("Try again.\n");
                        }else if(individual1.count == 6){
                            printf("Verifying, please wait");
                                for(int p=0;p<3;p++){
                                    sleep(1);
                                    printf(".");
                                }
                                sleep(2);
                                printf("\nVerified successfully. The account has been created!");
                        }
            }while(individual1 != 6);
        }//else if(individual1.count == 1)


}
*/