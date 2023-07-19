
#include <stdio.h>
void main()
{
    int marks[5][5], i, j, k = 4;
    float avg[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter student %d marks \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Enter subject %d marks ", j + 1);
            scanf("%d", &marks[i][j]);
            if (marks[i][j] <= 0 || marks[i][j] > 100)
            {
                printf("\ninvalid marks for student %d subject %d \n", i + 1, j + 1);
                k = 10;
                break;
            }
        }
        if (k == 10)
        {
            break;
        }
    }
    if(k!=10)
    {

   
    for (i = 0; i < 5; i++)
    {
        avg[i] = (marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4]) / 5;
        printf("avg of syudent %d is %.2f \n", i + 1, avg[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (avg[i] >= 33 && avg[i] < 45)
        {
            printf(" student %d is pass grad is D \n", i + 1);
        }
        else if (avg[i] >= 45 && avg[i] < 60)
        {
            printf(" student %d is pass grad is C \n", i + 1);
        }
        else if (avg[i] >= 60 && avg[i] < 80)
        {
            printf(" student %d is pass grad is B \n", i + 1);
        }
        else if (avg[i] >= 80 && avg[i] <= 100)
        {
            printf(" student %d is pass grad is A \n", i + 1);
        }
        else
        {
            printf(" student %d is fail  \n", i + 1);
        }
    }
    }
    printf("\ngood byee........");
}