#include<stdio.h>
void main()
{
    int  col,col2,row,temp,flash;
    temp = 5;
    flash = 1;
    for (row = 1; row <= 5;row++)
    {
        for (col = 1; col <= temp; col++)
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

// _*
// _____*****


// _____*****
// _____*****
// _____*****
// _____*****
// _____*****

// _____*
// ____* *
// ___* * *
// __* * * *
// _* * * * *
