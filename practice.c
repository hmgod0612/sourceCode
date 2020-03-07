#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int matrix[100][100] = { 0 };

    int num, x, y, cnt = 0;
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &x, &y);

        for (int j = y - 1; j < y - 1 + 10; j++)
        {
            for (int k = x - 1; k < x - 1 + 10; k++)
            {
                matrix[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (matrix[i][j] == 1)
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}