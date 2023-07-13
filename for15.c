// https : // i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
 void  main()
{
    int i, j,temp,j2,flash;
    flash = 5;
    temp = 1;

    for (i = 1; i <= 5;i++)
    {
        for (j2 = 1; j2 <= flash;j2++)
        {
            printf(" ");
        }
        for (j = 1; j <= temp; j++)
        {
            if(j==1 || i==5 || i==j)
            {
            printf("%d ",j);

            }
            else{
            printf("  ");
            }
        }

        printf("\n");
        temp++;
        flash--;
  }



   
}