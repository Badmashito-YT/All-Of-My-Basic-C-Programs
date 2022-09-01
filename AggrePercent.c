/*Calculation  of Aggregate marks and Percentage */
#include <stdio.h>

int main()
{   
    int m1,m2,m3,m4,m5;
    int aggregate,percentage;

    printf("Enter the Marks of 5 Subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    //Formulas
    aggregate = (m1 +m2 +m3 +m4 +m5);
    percentage = (aggregate/5);

    printf("\nThe Aggregate of the student is: %d",aggregate);
    printf("\nThe Percentage of the student is: %d",percentage);

    return 0;
}