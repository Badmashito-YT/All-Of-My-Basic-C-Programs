/*Conversion of Degree Fahrenheit to Degree Centigrade  */

#include <stdio.h>

int main()
{
    float c,fah;
    printf("Enter the value of Degree Fahrenheit: ");
    scanf("%f",&fah);
    c = (fah - 32)* 0.55;
    printf("\nThe value in Degree Centrigrade is:%f",c);

    return 0;
}