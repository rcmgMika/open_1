#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int unique(char* x){
    for(int i = 0; i < strlen(x); i++){
        for(int j = 0; j < strlen(x); j++){
            if(x[j] == x[i])return 0;
        }
    }

    return 1;//if unique
}

int lengthOfLongestSubstring(char* s) {
    int k = 1, highest[64], index = 0;
    char temp[64];
    for(int i = 0; i < strlen(s); i++){
        for(int j = i; j < k; j++){
            if(s[j] == s[k]){
                highest[index++] = k;
                k = 1;
                break;
            }
            k++;
        }
    }
    int this = highest[0];
    for(int i = 1; i < 64; i++){
        if(this < highest[i]){
            this = highest[i];
        }
    }


    return this;
}

int main(){
    char c[] = "abccabcd";
    char fuck[] = "pwwkew";
    char test1[] = "abcabcbb";
    char test2[] = "bbbbb";

    printf("\n\n\n\nhighest: %d", lengthOfLongestSubstring(test2));
    return 0;
}