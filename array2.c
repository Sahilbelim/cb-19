// write a program to fing area of cylinder .
#include<stdio.h>
void main()
{
    int i;
    float pi, r[5], h[5], area[5];
    pi = 3.14159;
    for (i = 0; i < 5;i++)
    {
        printf("Enter value of %d cilynder \n",i+1);
        printf("Enter value of radius ");
        scanf("%f", &r[i]);
        printf("Enter value of height ");
        scanf("%f", &h[i]);
   }
   for (i = 0; i <=4 ;i++)
   {
        area[i] = pi * (r[i] * r[i]) * h[i];
        printf("volume of cilunder %d is %.2f\n",(i+1), area[i]);
  }

}