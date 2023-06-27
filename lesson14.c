// check minimum of three number 
#include<stdio.h>
void main()
{

    int number1, number2, number3;

    printf("Enter number 1 ");
    scanf("%d", &number1);
    printf("Enter number 2 ");
    scanf("%d", &number2);
    printf("Enter number 3 ");
    scanf("%d", &number3);

    printf("number 1 is %d number 2 is %d number 3 is %d \n", number1, number2, number3);

    if(number1==number2 && number2==number3)
    {
        printf(" all are same");
    }
    else
    {

    

    if(number1>number2) 
    {
        if(number3>number2)
        {
            printf("number 2 is small");
        }
        
        else
        {
            printf("number 3 is small ");
        }
    }
    else
    {
        if(number3>number1)
        {
            printf("number 1 is small");
        }
        else
        {
            printf("number 3 is small");
        }

    }
    }
}