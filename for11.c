#include<stdio.h>
void main()
{
    int row, col1, col2,number;

    printf("Enter number of pyramid line ");
    scanf("%d", &number);
   
    for (row = 1; row <= number;row++)
    {
        for (col1 = 1; col1 <= ((number+1)-row); col1++)
        {
            printf(" ");
        }
        for (col2 = 1; col2 <= row; col2++)
        {
            printf("* ");
        }
        printf("\n");
        
        
    }
}
