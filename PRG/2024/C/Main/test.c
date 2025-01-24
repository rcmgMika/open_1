#include <stdio.h>
#include <stdlib.h>

int* merge_arr(int *arr, int size, int *arr2, int size_2){
    int *temp = (int*)malloc((size+size_2)*sizeof(int));
    for(int i = 0; i < size + size_2; i++){
        if(i < size){
            temp[i] = arr[i];
        }else{
            temp[i] = arr2[i-size];
        }
    }
    return temp;
}

//1, 2, 3, 4, 5, 6, 7

void find_middle(int *arr, int n1){
    if(n1 % 2 == 0){
        double shit = (double)(arr[(n1-1)/2]+arr[((n1-1)/2)+1])/2;
        printf("median of even: %lf", shit);
    }else{
        double shit = (double)(arr[(n1-1)/2]);
        printf("median of odd: %lf", shit);
    }
}


int main(){
    int akim[] = {1, 2, 3, 4, 5, 6, 7};
    find_middle(akim, sizeof(akim)/sizeof(akim[0]));
}
