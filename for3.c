// 4]2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 521.
#include<stdio.h>

void main()
{
    int f_num, s_num,add=1 ,i;
    f_num = 2;
    s_num = 1;

    printf("%d ,", f_num);
    printf("%d ,", s_num);
    for (i = 1; i <= 4;i++)
    {
        add = f_num + s_num; // 3
        printf(" %d ,", add);

        f_num = s_num + add; // 4
        printf("%d ,", f_num);

        s_num = f_num + add; // 7

        printf("%d ,", s_num);
   }
}
    // add = f_num + s_num;//11
    // printf("%d", add);

    // f_num = s_num + add;//18
    // printf("%d", f_num);

    // s_num = f_num + add;//29
    // printf("%d", s_num);

    // add = f_num + s_num;
    // printf("%d", add);//47