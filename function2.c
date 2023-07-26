#include<stdio.h>
void printsymbol(char sy,int n)
{
    int i;
    for (i = 1; i <= n;i++)
    {
        printf("%c", sy);
    }

    printf("\n");
}
void main()
{
    char symbol;
    int num;

    printf("Enter symbol ");

    scanf("%c", &symbol);

    printf("Enter number ");

    scanf("%d",&num);

    printf("name : sahil \n");

    printsymbol('-',num);

    printf("age : 18 \n");

    printsymbol('_',num);

    printf("name : parth \n");

    printsymbol('*',num);

    printf("age : 20\n");

    printsymbol('+',num);

    printf("name : janard \n");

    printsymbol('/',num);

    printf("age : 21 \n");

    printsymbol('%',num);
}