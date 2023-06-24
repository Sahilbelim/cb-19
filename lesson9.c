#include<stdio.h>
void main()
{
    int number, first_number, last_number;

    printf("Enter any two digit number ");
    scanf("%d", &number);

    

    if(number>=10 && number<=99)
    {
        first_number = number / 10;
        last_number = number % 10;
        printf("first number is %d and last number is %d ", first_number, last_number);
    }
    
    printf("\ngoode byeee....");
}