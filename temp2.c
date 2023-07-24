// _*
// _____*****

// _____*****
// _____*****
// _____*****
// _____*****
// _____*****

#include<stdio.h>
void main()
{
    int col1, col2, row,temp;
    temp = 5;


    for (row = 1; row <= 5;row++)
    {
        for (col1 = 1; col1 <= row; col1++)
        {
            printf(" ");
        }

        for (col2 = 1; col2 <= temp; col2++)
        {
            printf("* ");
        }

        printf("\n");
        temp--;
    }
}