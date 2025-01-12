#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s)
{
    int maxLength = 0, start = 0, charIndex[256] = {0};

    for (int end = 0; end < strlen(s); end++)
    {
        char currentChar = s[end];

        if (charIndex[currentChar] > start)
            start = charIndex[currentChar];

        charIndex[currentChar] = end + 1;
        int currentLength = end - start + 1;

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }
    return maxLength;
}

int main()
{
    char s[] = "abcabcbb";
    char c[] = "bbbbb";
    printf("The length of the longest substring without repeating characters is: %d\n", lengthOfLongestSubstring(c));
    return 0;

    /*
a = 1 (0) (1)
b = 2 (1) (2)
c = 3 (2) (3)
start = 0;
a (3) (3) -> (a = 1 > start) -> start = 1 -> a = 4;
start = 1;
b (4) (3) -> (b = 2 > start) -> start = 2 -> b = 5;
start = 2;
c (5) (3) -> (c = 3 > start) -> start = 3 -> c = 6;
start = 3;
d = 1 (6) (4)
start = 3;
a (7) (4) -> (a = 4 > start) -> start = 4 -> a = 8
start = 4;
a (8) (1) -> (a = 8 > start) -> start = 8 -> a = 9
start = 8;
a (9) (1) -> (a = 9 > start) -> start = 9 -> a = 10
start = 10

*/
}
