// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000

#include<stdio.h> 
void main()
{
    int num,count;
    num = 0;
    count = 1;
    printf("%d ,", num);
    num = num + count;
    while(num<=1000)
    {
        printf("%d ,", num);
        count = count + 1;
        num = num + count;
    }
   
}