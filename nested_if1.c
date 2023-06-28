// write a program to findout largest cyliender's volume from 3 cyliender dimensions using nested decision making statement 
#include<stdio.h>
void main()
{
    float r1, r2, r3, h1, h2, h3, area1, area2, area3,pi;
    pi = 3.14159;

    printf("Enter cylinder 1 radius ");
    scanf("%f", &r1);
    printf("Enter cylinder 1 height ");
    scanf("%f", &h1);
    printf("Enter cylinder 2 radius ");
    scanf("%f", &r2);
    printf("Enter cylinder 2 height ");
    scanf("%f", &h2);
    printf("Enter cylinder 3 radius ");
    scanf("%f", &r3);
    printf("Enter cylinder 3 height ");
    scanf("%f", &h3);

    area1 = pi * (r1 * r1) * h1;
    printf("area of cylinder  1 is %.2f\n", area1);

    area2 = pi * (r2 * r2) * h2;
    printf("area of cylinder  2 is %.2f\n", area2);
    area3 = pi * (r3 * r3) * h3;
    printf("area of cylinder  3 is %.2f\n", area3);


if(area1==area2 && area1==area3)
{

    printf("all are same");
}
else
{



if (area1>area3 && area1==area2)
{
    printf(" cylinder 1 and 2 both  are large and  same");
}

   else if(area1<area2)
    {

        if(area2==area3)
        {
            printf(" cylinder 2 and 3 both  are large and  same");
        }

        else if(area3<area2)
        {
            printf(" cylinder 2 volume is large");
        }

        else
        {
            printf(" cylinder 3 volume is large");

        }
    }
    
    else if (area1==area3)
    {
        printf(" cylinder 1 and 3 both  are large and  same");
    }
    

    else if (area3<area1)

    {
        printf(" cylinfer 1 volume is large ");
    }

    else
    {
        printf(" cylinfer 3 volume is large ");
    }
    
    

}
}

