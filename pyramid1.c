#include <stdio.h>
void main()
{
    int i, j, temp;
    i = 1;
    temp = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= temp) // you can also use to temp of i ;
        {
            printf("*");
            j++;
        }
        printf("\n");
        temp++;
        i++;
    }
}