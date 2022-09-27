#include<stdio.h>
int main(){
    //Variables
    int a[20],b[20],c[20],num,i;

    //Main
    printf("How many elements you want to input for both the arrays : ");
    scanf("%d",&num);

    //Storing the values in 1st Array
    printf("\nEnter the %d elements for 1st Array! \n",num);
    for (i=0;i<num;i++){
        scanf("%d",&a[i]);
    }

    //Storing the values in 2nd Array
    printf("\nEnter the %d elements for 2nd Array! \n",num);
    for (i=0;i<num;i++){
        scanf("%d",&b[i]);
    }

    printf("\nSum of the Two arrays !!\n");
    for (i=0;i<num;i++){
        c[i] = a[i] + b[i];
        printf("\nSum of %d position element is: %d !!",i+1,c[i]);
    }


    return 0;
}