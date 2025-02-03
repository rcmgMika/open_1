#include <stdio.h>
#include <stdlib.h>
/*
void twoSum(int x[], int size, int target){
    int e[2];
    int scan = 0;
    for(int i=0; i<size;i++){
        if((x[i]+x[i+1]) == target){
           e[i] = *(x + i);
           e[i+1] = *(x+(i+1));
                printf("\n[%d, %d]", e[i], e[i+1]);
            scan++;
        }
    }
    if(scan == 0){
        printf("\nNo possible combination");
    }
}

int main(int argc, char *argv[]){
    int* pTr = (int*)malloc(5 * sizeof(int));
    int target;
        for(int i=0; i<5; i++){
            printf("Enter no: ");
            scanf("%d", &*(pTr + i));
        }
            printf("Enter target: ");
            scanf("%d", &target);
    twoSum(pTr, 5, target);
    free(pTr);
}
*/
/* return an array. For that to work, we need to have a global variable because if we return a variable that is inside of that function, that is considered
as a local variable of that function. 
int g[64];

int* r(){
    int* v = g;
    *(v+0) = 1;
    *(v+1) = 2;
    return v;
}

int main(int argc, char *argv[]){
    int* p = r();
        for(int i=0; i<2; i++){
            printf("%d ", *(p + i));
        }
}
*/