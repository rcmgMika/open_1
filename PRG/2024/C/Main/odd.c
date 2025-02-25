#include <stdio.h>
#include <math.h>

void print_median(double val){
    double shit = (val/2)/(int)val;
    if(shit > 0){
        printf("%d", (int)((val/2)-shit)+1);
    }
    
}


int main(){
    print_median(7 );
}

/*
 3 - 2
4 - 2-3
 5 - 3
6 - 3-4
 7 - 4
8 - 4- 5
 9 - 5

*/