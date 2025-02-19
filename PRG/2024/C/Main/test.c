#include <stdio.h>
#include <string.h>

int main(){

    char p[] = "abc";

    for(int i = 0; i < strlen(p); i++){
        p[i]++;
        printf("%s\n", p);
    }


    return 0;
}