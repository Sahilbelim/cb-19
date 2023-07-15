// 1,4,9,16,25,36,49,64,81,100,...,3000.
// 1,2,3,4,5....
#include<stdio.h>
void main()
{
    int num,temp,sq;
    sq = 1;
    num = 1;
    temp = 3;
    printf("%d ,", num);
    num = num + temp;

 while(num<=3000)   
 {   printf("%d ,", num);
    temp = temp + 2;
    num = num + temp;
}

num = 1;

printf("\n%d ,", num);

while (sq <2916)
{
    num = num + 1;
    sq = num * num;
    printf("%d ,", sq);
}

}