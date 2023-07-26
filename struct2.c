#include<stdio.h>

struct Name
{
    char name[20];
    int age;
    float weight;

}n[5];

void main()

{
    int i;
    for (i = 0; i < 5;i++)
    {
        printf("Enter name ");
        scanf("%s", &n[i].name);
        printf("Enter Age ");
        scanf("%d", &n[i].age);
        printf("Enter Weigth ");
        scanf("%f", &n[i].weight);
        printf("name : %s \n", n[i].name);
        printf("Age : %d \n", n[i].age);
        printf("Weigth : %.2f \n", n[i].weight);
  }
}