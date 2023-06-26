#include<stdio.h>
void main()
{
    float weight, foot_height, inch_height, meter_height,f_to_m,i_to_m,bmi;

    printf("Enter weight in kg ");
    scanf("%f", &weight);
    printf("Enter height in foot ");
    scanf("%f",&foot_height);
    printf("Enter height in inch  ");
    scanf("%f",&inch_height);
    f_to_m = foot_height / 3.28;
    i_to_m = inch_height / 39.37;
    meter_height = i_to_m + f_to_m;
    // printf("%f", meter_height);

    bmi = weight / ((meter_height) * (meter_height));

    printf("your bmi is %.2f \n ", bmi);

        if(bmi<18.5)
        {
            printf(" you are underweight ");
        }
        else if (bmi>=18.5 && bmi <25)
        {
            printf("you are normal ");
        }
        else if(bmi >=25 && bmi <30)
        {
            printf(" you are overweight ");
        }
        else if (bmi >=30 && bmi <35 )
        {
            printf(" you are obese ");
        }
        else
        {
            printf(" you are extremly obese ");

        }

}