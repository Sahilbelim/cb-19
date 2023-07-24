#include<stdio.h>
float PI()
{
    return 3.14159;
}
void main()
{
    float pi, r,area;
    pi = PI();
    printf("Enter value of radius ");
    scanf("%f", &r);
    area = pi * (r * r);
    printf("Area of circle is %.2f ", area);

}