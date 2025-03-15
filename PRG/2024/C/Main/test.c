#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // IDEA: RECURSIVE FUNCTION THAT SPLITS THE ROWS LIKE WHEN THERE ARE 3 COLUMNS, YOU GET THE START AND AND OF THAT COLUMN; IT SPLITS IT UNTIL IT GETS TO THE MIDDLE OF EITHER AN ODD OR EVEN
    int col = 3, counter = col - 1, index = 0, index2 = 0, index3 = 0;
    char p[] = "AYPLISIRIG", locked_in[64] = "\0";
    char first[64] = "\0", second[64] = "\0";

    printf("\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < strlen(p); j++)
        {
            if (i == 0 && j % (2 * col - 2) == 0)
            {
                first[index++] = p[j];
                p[j] = '0';
            }
            else if (i == col - 1 && j == counter)
            {
                second[index2++] = p[j];
                p[j] = '0';
                counter += 2 * col - 2;
            }
        }
    }
    first[index] = '\0';
    second[index2] = '\0';
    printf("First=%s | Second=%s | %s\n", first, second, p);

    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] != '0')
        {
            locked_in[index3++] = p[i];
        }
    }
    printf("%s - %d\n", locked_in, strlen(locked_in));

    return 0;
}