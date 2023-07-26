#include <stdio.h>
int Fact (int num)
{
   
    if(num==1)
    {
        return 1;
    }
    else
    {
        return num * Fact(num - 1);
    }
}
void main()
{
    int num,fact;
    printf("Enter number ");
    scanf("%d", &num);
    fact=Fact(num);
    printf("%d", fact);
}