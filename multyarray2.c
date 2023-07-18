
#include<stdio.h>
void main()
{
    int marks[5][5],i,j;
    float avg[5];
    for (i = 0; i < 5;i++)
    {
        printf("Enter student %d marks \n",i+1);
        for (j = 0; j < 5; j++)
        {
            printf("Enter subject %d marks ", j + 1);
            scanf("%d", &marks[i][j]);
        }
      
    }
    
    for (i = 0; i < 5;i++)
    {
        avg[i] = (marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4]) / 5;
        printf("avg of syudent %d is %.2f \n", i + 1, avg[i]);
    }


    // if (marks[i][j] <= 0 || marks[i][j] >= 100)
    // {
    //     printf("invalid marks \n");
    //     
    //     break;
    // }
}