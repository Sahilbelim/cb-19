#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("Enter number ");
    scanf("%d", &num);
    while(num>1)
    {
        fact = fact * num;
        num = num - 1;
    }
    printf("%d", fact);
}