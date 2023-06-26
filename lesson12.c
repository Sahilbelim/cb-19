#include <stdio.h>
void main()
{

    int num, f_num, l_num;

    printf("enter any two digit number ");

    scanf("%d", &num);

    f_num = num / 10;

    l_num = num % 10;
    if (num < 10 || num > 99)
    {
        printf("invalide number");
    }
    else
    {

        switch (f_num)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;

        case 5:
            printf("five");
            break;

        case 6:
            printf("six");
            break;

        case 7:
            printf("seven");
            break;

        case 8:
            printf("eight");
            break;

        case 9:
            printf("nine");
            break;

        case 0:
            printf("zero");
            break;
        }

        printf("   ");
        switch (l_num)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;

        case 5:
            printf("five");
            break;

        case 6:
            printf("six");
            break;

        case 7:
            printf("seven");
            break;

        case 8:
            printf("eight");
            break;

        case 9:
            printf("nine");
            break;

        case 0:
            printf("zero");
            break;
        }
    }
}