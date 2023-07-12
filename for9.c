#include<stdio.h>
void main()
{
    int row, col,temp=1;

    for (row = 1; row <= 5;row++)
    {
        for (col = 1; col <= temp; col++)
        {
            printf("%d",col);
        }
        printf("\n");
        temp++;
   }
}