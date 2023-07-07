/*

*
**
***
****
*****

*/
#include<stdio.h>
void main()
{
    int i, j,temp;
    i = 1;
    temp = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= temp) // you can also use to temp of i ;
        {
            printf("*");
            j++;
        }
        printf("\n");
        temp++;
        i++;
   }

    // j = 1;
    // while (j<=5)
    // {

    //     printf("*");
    //     j++;
    // }
  
    // printf("\n");
    // j = 1;
    // while(j<=5)
    // {
    //     printf("*");
    //     j++;
    // }
    // printf("\n");
    // j = 1;
    // while (j <= 5)
    // {
    //     printf("*");
    //     j++;
    // }
    // printf("\n");
    // j = 1;
    // while (j <= 5)
    // {
    //     printf("*");
    //     j++;
    // }
    // printf("\n");
}


// step-1 :*

// step-2:1*2*3*4*5*6


// step-3:
// ***** \n
// *****
// *****
// *****
// *****

// step-4:
// *
// **
// ***
// ****
// *****