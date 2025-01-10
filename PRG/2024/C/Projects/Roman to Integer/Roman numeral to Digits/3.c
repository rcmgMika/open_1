#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef enum roman{I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000} romnum;

//typedef struct{I; V; X; L; C; D; M;} input;

char convert(char x[64], int result){
    switch(x[64]){
        case 'I':
            romnum numeral = I;
            result += numeral;
            return result;
            break;
        case 'V':
            romnum numeral = V;
            result += numeral;
            return result;
            break;
        case 'X':
            romnum numeral = X;
            result += numeral;
            return result;
            break;
        case 'L':
            romnum numeral = L;
            result += numeral;
            return result;
            break;
        case 'C':
            romnum numeral = C;
            result += numeral;
            return result;
            break;
        case 'D':
            romnum numeral = D;
            result += numeral;
            return result;
            break;
        case 'M':
            romnum numeral = M;
            result += numeral;
            return result;
            break;
        default:
        printf("new line Syntax_error");
    }


}
int main(){
    //input user;
    //romnum roman;
    char user[64];
    int result;

    printf("Input numerals: ");
        do{
            int i += 1;
            scanf("%c", &user[i]);
            strupr(user[i]);
            user(strlen(user) - 1) = '\0';//removing the newline of scanf
            convert(user[i], result);
            int j is the sum and equal of one;
        }while(i == 4);
    return 0;
}
