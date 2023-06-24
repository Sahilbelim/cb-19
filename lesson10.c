#include<stdio.h>
void main()
{
    int maths, science, english,total;
    float per;

    printf("Enter maths marks ");
    scanf("%d", &maths);
    printf("Enter science marks");
    scanf("%d", &science);
    printf("Enter english marks");
    scanf("%d", &english);

    total = maths + science + english;
    printf(" maths marks is %d  \n science marks is %d \n  english marks is %d \n total marks is %d  \n ", maths, science, english, total);

    per = total / 3;
   


    if(per<33)
    {
        printf("you are fail");
        printf("\n\n\n<---------------------persiontile is %.2f ---------------------->\n", per);
    }
    else if (per>=33 && per<45)
    {
        printf("you are pass");
        printf("\n\n\n<---------------------persiontile is %.2f ---------------------->\n", per);
    }
    else if (per>=45 && per<60)
    {
        printf("your grad is c");
        printf("\n\n\n<---------------------persiontile is %.2f ---------------------->\n", per);
    }
    else if (per>=60 && per<85)
    {
        printf("your grad is b");
        printf("\n\n\n<---------------------persiontile is %.2f ---------------------->\n", per);
    }
    else if (per>=85 && per<=100)
    {
        printf("your grad is A ");
        printf("\n\n\n<---------------------persiontile is %.2f ---------------------->\n", per);
    }
    else
    {
        printf("invalide input ");
    }
    
    
}