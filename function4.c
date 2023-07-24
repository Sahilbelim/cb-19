#include<stdio.h>

float Add(float n1, float n2)
{
    float add = n1 + n2;
    return add;
}
float Sub (float s1,float s2)
{
    float sub = s1 - s2;
    return sub;
}
float Mul (float m1,float m2)
{
    float mul = m1 * m2;
    return mul;
}
float Div (float d1,float d2)
{
    return (d1 / d2);
}
void main()
{
    float num1, num2, add, sub, mul, div;

    printf("Enter Value of number 1 ");
    scanf("%f", &num1);
    printf("Enter Value of number 2 ");
    scanf("%f", &num2);
    add = Add(num1,num2);
    printf("Addition is %.2f \n", add);
    sub = Sub(num1,num2);
    printf("Subtraction is %.2f \n", sub);
    mul = Mul(num1, num2);
    printf("Multiplication is %.2f \n", mul);
    div = Div(num1, num2);
    printf("Division is %.2f \n", div);
}