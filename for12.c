#include <stdio.h>
void main()
{
    int i, j,k, temp;
    temp = 1;
    k = 1;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= temp; j++)
        {
            printf("%d",k);
           k++;
        }

        printf("\n");
        temp++;
    }
}