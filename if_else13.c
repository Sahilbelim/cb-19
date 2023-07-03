/* Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 
units           price  per unit 
<100            1
>100 & <200     2 
>200 & <300     3
>300 & <400     4
>400            5
also calculate 5% percentage energy charge on total bill amount & display total amount 
*/

#include<stdio.h>
void main()
{

    int unit,total;
    float final_total;

    printf("Enter unit ");
    scanf("%d", &unit);

    if(unit>=1 && unit<100)
    {
        total = unit * 1;
        final_total = total + ((total * 5) / 100);
        printf(" final bill amount is %.2f", final_total);
    }
    else if (unit>=100 && unit<200 )
    {
        total = unit * 2;
        final_total = total + (total * 5) / 100;
        printf(" final bill amount is %.2f", final_total);

    }
    else if (unit>=200 && unit <300 )
    {
        total = unit * 3;
        final_total = total + (total * 5) / 100;
        printf(" final bill amount is %.2f", final_total);
    }
    else if (unit>=300 && unit <400)

    {
        total = unit * 4;
        final_total = total + (total * 5) / 100;
        printf(" final bill amount is %.2f", final_total);
    }
    else if (unit>=400)
    {
        total = unit * 5;
        final_total = total + (total * 5) / 100;
        printf(" final bill amount is %.2f", final_total);
    }
    
    else
    {
        printf("invalide");
    }
    
    
    
    
}