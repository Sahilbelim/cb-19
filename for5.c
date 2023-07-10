// full pyramid
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png

#include<stdio.h>
 void main()
 {
     int i, j, k,temp,flash;
     temp = 5;
     flash = 1;

     for (i = 1; i <= 5;i++)
     {
         for (j = 1; j <= temp; j++)
         {
             printf(" ");
         }
         for (k = 1; k <= flash; k++)
         {
             printf("* ");
         }
         printf("\n");
         temp--;
         flash++;
    }
 }

//  _____*
//  ____* *
//  ___* * *
//  __* * * *
//  _* * * * *

//  _*
//  _____*****

//  _____******
//  _____******
//  _____******
//  _____******
//  _____******