#include<stdio.h>
void main()
{

    int number1,number2;

    printf("Entre  number 1 ");
    scanf("%d", &number1);

    printf("Entre  number 2 ");
    scanf("%d", &number2);


if(number1<number2)
{
    printf("number 1 is small ");
}
else if (number1>number2)
{
    printf("number 2 is small");
}
else if (number1==number2)
{
    printf("both are same");
}
else
{
    printf("invalide input ");
}
    
    
}