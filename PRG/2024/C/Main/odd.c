#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int reverse(int x){
    char p[20], temp[20] = "\0";
    sprintf(p, "%d", x);
    int rev = strlen(p)-1, limit = (int)pow(2, 31)-1, min = -(int)pow(2,31)-1;

    for(int i = 0; i < strlen(p); i++){
        if(x < 0 && i == 0){
            temp[i] = '-';
            rev++;
            continue;
        }else temp[i] = p[rev-i];
    }
    double t = atof(temp);
    if(t > limit || t < min) return 0;
    return atoi(temp);
}



int main(){

    

    int p = 123;
    double s = p % 10;
    printf("%lf", s);

    int o = 0;

    printf("%d", o-__INT_MAX__-1);

    return 0;
}