// full hollow pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
void main()
{
    int row, col1, col2, temp, flash;
    temp = 5;
    flash = 1;
    for (row = 1; row <= 5;row++)
    {
        for (col1 = 1; col1 <= temp; col1++)
        {
            printf("_");
        }
        for (col2 = 1; col2 <= flash; col2++)
        {
            if(row==5 || col2==1 || row==col2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        temp--;
        flash++;
  }

}