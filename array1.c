#include<stdio.h> 
void main()
{
   
    float avg, marks[5];
    int temp;
    for (temp = 0; temp < 5;temp++)
    {
        printf("Enter marks %d ",(temp+1));
        scanf("%f", &marks[temp]);
   }
   for (temp = 0; temp < 5;temp++)
   {
        printf(" marks of subject %d is %.2f\n",temp+1, marks[temp]);
  }
  avg = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;

  printf(" avg of all subject is %.2f ", avg);
}