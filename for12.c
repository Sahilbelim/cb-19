#include <stdio.h>
void main()
{
    int i, j,k, temp,sq;
    temp = 1;
    k = 1;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= temp; j++)
        {
            sq = j * j;
            printf("%d",sq);
           k++;
        }

        printf("\n");
        temp++;
    }
}