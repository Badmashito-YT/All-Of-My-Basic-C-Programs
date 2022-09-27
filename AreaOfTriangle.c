//To find the area of triangle. Given three sides
#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    float sum,expression,area;
    printf("Enter the Three numbers:  ");
    scanf("%d %d %d",&a,&b,&c);

    sum = (a+b+c)/2;
    expression = (sum*(sum-a)*(sum-b)*(sum-c));
    area = sqrt(expression);

    printf("\nThe area of the triangle is %f",area);
    
    return 0;
}