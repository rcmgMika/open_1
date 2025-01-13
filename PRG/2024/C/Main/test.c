/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int unique(char *x)
{
    for (int i = 0; i < strlen(x); i++)
    {
        for (int j = i + 1; j < strlen(x); j++)
        {
            if (x[i] == x[j])
                return 0;
        }
    }
    return 1;
}
int lengthOfLongestSubstring(char *s)
{
    if (strlen(s) == 0)
    {
        return 0;
    }
    char temp[64] = "\0";
    int highest = 1, index = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        temp[index++] = s[i];
        for (int j = i + 1; j < strlen(s); j++)
        {
            temp[index++] = s[j];
            temp[index] = '\0';
            if (unique(temp))
            {
                if (highest < strlen(temp))
                {
                    highest = strlen(temp);
                }
                if (j >= strlen(s) - 1)
                {
                    i = strlen(s) - 1;
                    return highest;
                    break;
                }
            }
            else
            {
                strcpy(temp, "\0");
                index = 0;
                break;
            }
        }
    }
    return highest;
}

int main()
{
    char c[] = "abccabcd";
    char fuck[] = "pwwkew";
    char test1[] = "abcabcbb";
    char test2[] = "bbbbb";
    char shit[] = "";

    printf("\n\n\n\nhighest: %d", lengthOfLongestSubstring(shit));
    return 0;
}*/

#include <stdio.h>
#include <math.h>

int main(){
    double e = 2.718281828459045, n = 1, euler = 0;
    while(euler != e){
        euler = pow((1+1/n), n); n++; printf("%.20lf\n", euler);
    }
    printf("\n\nn = %d", n);


}