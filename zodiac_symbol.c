#include<stdio.h>

void main()
{
    int month, date;

    printf("Enter  month ");
    scanf("%d", &month);
    printf("Enter date ");
    scanf("%d", &date);
    
            if(month==3 && date>=21 && date<=31 || month==4 &&  date>=1 && date<=19 )  // month=3 21-31  mounth=4 1 -19
        {
            printf("zodiac sign is aries  symbol is the ram ");
        }

        else if( month==4 && date>=20 && date<=30 || month==5 && date>=1 && date<=20 )
        {
            printf(" zodiac sing is taurus symbol is the bull");
        }
        else if (month==5 && date>=21 && date<=31 || month==6 && date>=1 && date<=20)
        {
            printf("zodiac sing is gemini symbol is the twins ");
        }
        else if (month==6 && date>=21 && date<=30 || month==7 && date>=1 && date<=22)

        {
            printf("zodiac sign is cancer symbol is the crab");
        }
        else if (month==7 && date>=23 && date<=31 || month==8 && date>=1 && date<=22)
        {
            printf("zodiac sign is leo symbol is the lion");
        }
        else if (month == 8   && date>=23 && date<=31 || month == 9 && date>=1 && date<=22)
        {
            printf("zodiac sign is virgo  symbol is the virgin");
        }
        else if (month==9 && date>=23 && date<=30 || month==10 && date>=1 && date<=22)
        {
            printf("zodiac sign is libra symbol is the scales");
        }
        else if (month==10 && date>=23 &&date<=31 || month==11 && date>=1 && date<=21)
        {
            printf("zodiac sign is scorpio symbol is the scorpion");
        }
        else if (month==11 && date>=22 && date<=30 || month==12 && date>=1 && date<=21)
        {
            printf("zodiac sign is sagittaarius symbol is the archer");
        }
        else if (month==12 && date>=22 && date<=31 || month==1 && date>=1 && date<=19)
        {
            printf("zodiac sign is capricorn  symbol is the goat");
        }
        else if (month==1 && date>=20 && date<=31 || month==2 &&date>=1 && date<=18)
        {
            printf("zodiac sign is aqurius symbol is the water bearer");
        }
        else if (month==2 && date>=19 && date<=29 || month==3 && date>=1 && date<=20)
        {
            printf("zodiac sign is pisces symbol is the fishes");
        }
        else
        {
            printf(" invalide input ");
        }
}