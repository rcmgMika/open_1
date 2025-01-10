#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int lengthOfLongestSubstring(char* s) {
    // if a != b && a != c count++ || b == c, sum[0] = count; 
    // count = 0, repeat first line
    static int output[64], count = 0, j=0, index; bool fuck = true;   
    printf("length: %d\n", strlen(s)-1);
    for(int i=1; i<strlen(s);i++){
        for(int shit = j; shit<i; shit++){
            printf("%c, %c\n", s[shit], s[i]);
            if(s[shit] == s[i] || i == strlen(s)-1){
                if(fuck){
                    output[index++] = i - 0;
                    fuck = false;
                }else{
                    output[index++] = j - output[index-1];
                }
                j = i+1;
                printf("count == %d || j=%d, i=%d, output 1=%d, output 2=%d\n", count, j, i, output[0], output[1]);
                i++;
                break;
            }
           //printf("j = %d, i = %d\n", shit, i);            
        }
        //count++;
    }
    int highest = output[0];
    for(int i = 1; i < sizeof(output)/sizeof(output[0]); i++){
        if(highest < output[i]){
            highest = output[i];
        }
    }
    return highest;
}

int main(){
    char c[] = "abccabcd";
    char fuck[] = "pwwkew";
    char test1[] = "abcabcbb";
    char test2[] = "bbbbb";

    //printf("\n\n\n\nhighest: %d", lengthOfLongestSubstring(test2));
    char sike[] = "Hello there";
    printf("%s", sike);
    return 0;
}
