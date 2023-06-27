// write a program to check milliniour year 
#include<stdio.h>
void main ()
{
    int year,miniyear;

    printf("Enter year");
    scanf("%d", &year);
    miniyear = year % 1000;

    if (miniyear == 0)
    {
        printf(" year is milliniuor year");
    }
    else
    {

        printf(" year is not  milliniuor year");
    }
}