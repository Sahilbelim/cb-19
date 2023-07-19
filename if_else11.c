// Write a programe to findout how many days a month has accpect month from user
#include <stdio.h>

void main()
{

    int month, date;
  
    printf("enter month ");
    scanf("%d", &month);
    printf("Enter date ");
    scanf("%d", &date);

    if (date >= 1 && date <= 29 && month == 2)
    {
        printf("valide month date ");
    }
    else if (date >= 1 && date <= 30)
    {
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("valide month date");
        }
    }
    else if (date >= 1 && date <= 31)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            printf("valide month date");
        }
        else
        {
            printf("invalide month date");
        }
    }

    else
    {
        printf("invalide month date");
    }

    printf("\ngoode byyy");
    
}