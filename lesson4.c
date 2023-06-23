#include<stdio.h>
void main()
{

    int number,f_num,l_num;

    printf("Enter any two digit number ");
    scanf("%d", &number);

    printf(" number is %d", number);
    f_num = number / 10;
    l_num = number % 10;



    printf("\n first number is ");
    if(f_num==1)
    {
        printf(" one ");

    }
    if(f_num==2)
    {
        printf("two");
    }
    if(f_num==3)
    {
        printf("three");

    }
    if(f_num==4)
    {
        printf("four");
    }
    if(f_num==5)
    {
        printf("five");

    }
    if(f_num==6)
    {
        printf("six");
    }
    if(f_num==7)
    {
        printf("seven");
    }
    if(f_num==8)
    {
        printf("eight");
    }
    if(f_num==9)
    {
        printf("nine");
    }
    if(f_num==0)
    {
        printf("zero");
    }

    printf("\n last number is ");
    if (l_num == 1)
    {
        printf(" one ");
    }
    if (l_num == 2)
    {
        printf("two");
    }
    if (l_num == 3)
    {
        printf("three");
    }
    if (l_num == 4)
    {
        printf("four");
    }
    if (l_num == 5)
    {
        printf("five");
    }
    if (l_num == 6)
    {
        printf("six");
    }
    if (l_num == 7)
    {
        printf("seven");
    }
    if (l_num == 8)
    {
        printf("eight");
    }
    if (l_num == 9)
    {
        printf("nine");
    }
    if (l_num == 0)
    {
        printf("zero");
    }

    printf("\n good byee....");
}