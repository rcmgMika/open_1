#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int col = 3, index = 0, counter = col - 1, to = 0;
    char p[] = "PAYPALISHIRING";

    printf("\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < strlen(p); j++)
        {
            if (i == 0 && j % (2 * col - 2) == 0)
            {
                printf("%c ", p[j]);
            }
            else if (i != col - 1 && i != 0 && j % 2 != 0) // i % col - 1 != 0 && i != 0 
            {
                printf("%c ", p[j]);
            }
            else if (i == col - 1 && j == counter)
            {
                printf("%c ", p[j]);
                counter += 2 * col - 2;
            }
        }
        printf("\n");
    }

    return 0;
}

/*
PAYPAL IS HIRING

row - 3 - PAHNAPLSIIGYIR
P A H N - 0, 4, 8, 12 (+4 pattern) - 2col-2
APLSIIG - 1, 3, 5, 7, 9, 11, 13 (+2 pattern)
Y I R   - 2, 6, 10 (+4 pattern)

row - 4 - PINALSIGYAHRPI
P  I  N - 0, 6, 12 (+6 pattern) - 2col-2
A LS IG - 1, 5, 7, 11, 13 (+4, +2, +4, +2 pattern)
YA HR   - 2, 4, 8, 10 (+2 pattern)
P  I    - 3, 9 (+6 pattern)

row - 5 - PHASIYIRPLIGAN
P   H   - 0, 8 (+8 pattern) 2col-2
A  SI   - 1, 7, 9 (+6, +2 pattern)
Y I R   - 2, 6, 10 (+4 pattern)
PL  IG  - 3, 5, 11, 13 (+2, +6, +2 pattern)
A   N   - 4, 12 (+8 pattern) - index % 2col-2 || 2col-2 % index








*/