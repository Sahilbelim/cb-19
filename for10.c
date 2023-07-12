#include<stdio.h>
void main()
{
    int row, col1, col2,temp,flash=1,number;

    printf("Enter number of pyramid line ");
    scanf("%d", &number);
    temp = number;
    for (row = 1; row <= number;row++)
    {
        for (col1 = 1; col1 <= temp; col1++)
        {
            printf(" ");
        }
        for (col2 = 1; col2 <= flash; col2++)
        {
            printf("* ");
        }
        printf("\n");
        temp--;
        flash++;
    }
}