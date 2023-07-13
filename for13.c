// https : // i1.faceprep.in/fp/articles/img/46684_1580817324.png
#include<stdio.h>
 void  main()
{
    int i, j,temp;
    char sy;

    temp = 1;
    printf("Enter any symbol");
    scanf("%c", &sy);
    for (i = 1; i <= 5;i++)
    {
        for (j = 1; j <= temp; j++)
        {
            printf("%c",sy);
        }

        printf("\n");
        temp++  ;
  }



   
}