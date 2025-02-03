#include <stdio.h>

void r(int *arr){
    arr[0] = 200;
}

int main(){
    int arr[] = {2, 3};
    r(arr);
    printf("%d", arr[0]);
}