#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // IDEA: RECURSIVE FUNCTION THAT SPLITS THE ROWS LIKE WHEN THERE ARE 3 COLUMNS, YOU GET THE START AND AND OF THAT COLUMN; IT SPLITS IT UNTIL IT GETS TO THE MIDDLE OF EITHER AN ODD OR EVEN
    int col = 3, index = 0, counter = col - 1;
    char p[] = "PAYPALISHIRING", locked_in[64] = "\0";

    printf("\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < strlen(p); j++)
        {
            if (i == 0 && j % (2 * col - 2) == 0)
            {
                p[j] = '0';
            }
            else if (i == col - 1 && j == counter)
            {
                p[j] = '0';
                counter += 2 * col - 2;
            }
        }
    }
    printf("%s\n", p);

    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] != '0')
        {
            locked_in[index++] = p[i];
        }
    }
    printf("%s - %d\n", locked_in, strlen(locked_in));

    return 0;
}