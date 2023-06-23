// write a program to check milliniour year 
#include<stdio.h>
void main ()
{
    int year,i;

    printf("Enter year");
    scanf("%d", &year);
    i = year % 1000;

    if(i==0)
    {
        printf(" year is milliniuor year");
    }
    else
    {

        printf(" year is not  milliniuor year");
    }
}