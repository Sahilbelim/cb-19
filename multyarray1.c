#include<stdio.h>
void main()
{
    int num[2][2],sum;

    num[0][0] = 10;
    num[0][1] = 20;
    num[1][0] = 30;
    num[1][1] = 40;
    sum = num[0][0] + num[0][1] + num[1][0] + num[1][1];
    printf(" sum is %d ", sum);
}