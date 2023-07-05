#include<stdio.h>
void main()
{

    int num,count;
    count = 1;
    printf("Enter number ");
    scanf("%d", &num);
while(count<=num)
{

    printf("%d \n", count);
    count = count + 1;
}
printf("\n good bye.....");
}