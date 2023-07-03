#include<stdio.h>
void main()
{
    int date, month, year, mod_year;

    printf("Enter year ");
    scanf("%d", &year);
    printf("Enter mouth ");
    scanf("%d", &month);
    printf("Enter date ");
    scanf("%d", &date);

    mod_year = year % 4;

    if ( month==2 )
    {
        if(mod_year==0)
        {
            if(date>=1 && date<=29)
            {
        printf(" valide date month and year ");

            }
            else
            {
        printf(" invalide date month and year ");

            }
            
        }
        else
        {
            if(date>=1 && date<=28)
            {

        printf(" valide date month and year ");
            }
            else
            {
        printf(" invalide date month and year ");

            }
        }
       
    }
   
    else if (date>=1 && date<=30 )
    {
        if(month==4 || month==6 || month==9 || month==11)
        {
        printf(" valide date month and year ");

        }
        
    }
    else if (date>=1 && date<=31)
    {
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        {
        printf(" valide date month and year ");

        }
        else
        {
        printf(" invalide date month and year ");

        }
    }
    else
    {
        printf(" invalide date month and year ");
    }
    
    


    
}