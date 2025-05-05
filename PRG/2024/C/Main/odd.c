#include <stdio.h>

int main(){

    FILE *p = fopen("sample.txt", "r");

    fseek(p, 26, SEEK_SET);

    int len = ftell(p);

    printf("%d", len);

    fclose(p);

    return 0;
}