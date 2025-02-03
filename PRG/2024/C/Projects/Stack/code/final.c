#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* push(long long int x){
    int* pointer1 = (int*)malloc(2 * sizeof(int));
    pointer1[0] = x; pointer1[1] = 1;
    return pointer1;
}
int* pop(){
    int* pointer2 = (int*)calloc(2, sizeof(int));
    pointer2[1] = 2;
    return pointer2;
}
int* clear(){
    int* pointer3 = (int*)calloc(2, sizeof(int));
    pointer3[1] = 3;
    return pointer3;
}
int* capacity(){
    int* pointer4 = (int*)calloc(2, sizeof(int));
    pointer4[1] = 4;
    return pointer4;
}
int* add(long long int value, int index){
    int* pointer5 = (int*)calloc(3, sizeof(int));
        pointer5[0] = value, pointer5[1] = 5, pointer5[2] = index;
    return pointer5;    
}
int* removes(int index){
    int* pointer6 = (int*)calloc(3, sizeof(int));
        pointer6[1] = 6, pointer6[2] = index;
    return pointer6; 
}
int* peak(){
    int* pointer7 = (int*)calloc(2, sizeof(int));
        pointer7[1] = 7;
    return pointer7;
}
int* search(long long int value){
    int* pointer8 = (int*)calloc(2, sizeof(int));
        pointer8[0] = value, pointer8[1] = 8;
    return pointer8;
}
void javaInt(int* function){
    int push = 0, pop = 63, capacity = 0;
        typedef struct integer{int array[64];} stack;
        static stack JavaIntStack;
            switch(function[1]){
                case 1:
                    while(true){
                        if(JavaIntStack.array[push] == 0){
                            JavaIntStack.array[push] = function[0];
                            printf("Push successful! Push value: %d at index: %d\n", JavaIntStack.array[push], push);
                            if(push >= 64){
                                push = 0;
                                break;
                            }
                            break;
                        }
                        if(push > 63){
                            printf("\nIndex out of bounds");
                            break;
                        }
                        push++;
                    }
                    break;
                case 2: 
                    while(true){
                        if(JavaIntStack.array[pop] != 0){
                            printf("Pop successful! Pop value: %d at Index: %d\n", JavaIntStack.array[pop], pop);
                            JavaIntStack.array[pop] = 0;
                            break;
                        }
                        if(pop < 0){
                            printf("\nIndex out of bounds");
                            break;
                        }
                        pop--;
                    }
                    break;
                case 3: 
                    while(push!=64){
                        JavaIntStack.array[push] = 0;
                        printf("Push index cleared: %d\n", push);
                        push++;
                    }
                    break;
                case 4:
                    printf("Capacity of Stack: %d\n", sizeof(JavaIntStack.array)/sizeof(JavaIntStack.array[0]));
                    for(int i = 0; i < 64; i++){
                        if(JavaIntStack.array[i] == 0){
                            capacity++;
                        }
                    }
                    printf("Remaining Unused Stack: %d\n", capacity);
                    break;
                case 5:
                    if(function[2] < 64){
                        JavaIntStack.array[function[2]] = function[0];
                        printf("Added successfully! Value: %d at Index: %d\n", JavaIntStack.array[function[2]], function[2]);
                    }else{
                        printf("Index out of bounds, error...\n");
                    }
                    break;
                case 6:
                    if(function[2] < 64){
                        printf("Removed successfully! Value: %d at Index: %d\n", JavaIntStack.array[function[2]], function[2]);
                        JavaIntStack.array[function[2]] = 0;   
                    }else{
                        printf("Index out of bounds, error...\n");
                    }
                    break;
                case 7:
                    while(true){
                        if(JavaIntStack.array[pop] != 0){
                            printf("Peak: %d\n", JavaIntStack.array[pop]);
                            break;
                        }
                        if(pop < 0){
                            printf("No value initialized. Index out of bounds\n");
                            break;
                        }
                        pop--;
                    }   
                    break;
                case 8:
                    while(true){
                        if(JavaIntStack.array[push] == function[0]){
                            printf("Searched Successfully! 1-based Index: %d | 0-based Index: %d", push+1, push);
                            break;
                        }
                        if(push > 63){
                            printf("-1");
                            break;
                        }
                        push++;
                    }
                    break;

            }
    free(function);        
}

int main(){
    javaInt(push(1));
}