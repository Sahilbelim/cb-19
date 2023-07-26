#include<stdio.h>

struct Name
{
    char name[20];
    
};

void main()

{
    struct Name n1, n2, n3,n4,n5;

    printf("Enter name ");
    scanf("%s", &n1.name);
    printf("name : %s \n", n1.name);
    printf("Enter name ");
    scanf("%s", &n2.name);
    printf("name : %s \n", n2.name);
    printf("Enter name ");
    scanf("%s", &n3.name);
    printf("name : %s \n", n3.name);
    printf("Enter name ");
    scanf("%s", &n4.name);
    printf("name : %s \n", n4.name);
    printf("Enter name ");
    scanf("%s", &n5.name);
    printf("name : %s \n", n5.name);
}