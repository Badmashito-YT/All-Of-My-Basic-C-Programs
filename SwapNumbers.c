//WAP to swap(exchange) values of two variables 'a' & 'b'
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the value of 'a' and 'b': ");
    scanf("%d %d",&a,&b);
    
    printf("\nBefore Swap!!");
    printf("\nValue of 'a' = %d \nValue of 'b' = %d ",a,b);
    //swap algo
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swap !!");
    printf("\nValue of 'a' = %d \nValue of 'b' = %d ",a,b);
}