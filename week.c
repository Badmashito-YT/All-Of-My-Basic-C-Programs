#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day(1-7): ");
    scanf("%d",&day);

    if (day  == 1)
    {printf("\nThe day is Monday !!");}

    else if (day ==2)
    {printf("\nThe day is Tuesday !!");}

    else if (day ==3)
    {printf("\nThe day is Wednesday !!");}

    else if (day ==4)
    {printf("\nThe day is Thursday !!");}

    else if (day ==5)
    {printf("\nThe day is Friday !!");}

    else if (day ==6)
    {printf("\nThe day is Saturday !!");}

    else if (day ==7)
    {printf("\nThe day is Sunday !!");}

    else
    {printf("\nYou entered WRONG !! Program Terminated!");}
    
    return 0;

}