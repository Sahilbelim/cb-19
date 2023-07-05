// 1] Write a programe to print all even number 
// 2, 4, 6, 8, 10, 12, .....5000

#include<stdio.h>
void main()
{

    int num;
    num = 2;
    while(num<=5000)
   {
       printf("%d ,", num);
       num = num + 2;
   }

   printf("good bye.......");
}