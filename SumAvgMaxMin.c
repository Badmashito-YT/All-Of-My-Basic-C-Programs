#include <stdio.h>
int main(){
    //Variables
    int limit,i,num,sum=0,max=0,min;
    float avg;

    //Main
    printf("How many numbers you want to input?? : ");
    scanf("%d",&limit);

    printf("\nEnter the numbers: \n");
    
    scanf("%d",&num);
    sum += num;
    min = num;
    
    for(i=1;i<limit;i++){
        scanf("%d",&num);
        sum = sum + num;
        //Finding Maximum
        if(num>max){
            max = num;
        }
        //Finding Minimum
        if(num<min){
            min = num;
        }

    }

    //Ending
    avg = sum/limit;

    //printing part
    printf("\nThe sum of the numbers is %d !",sum);
    printf("\nThe average of the numbers is %f !",avg);
    printf("\nThe maximum from the numbers is %d !",max);
    printf("\nThe minimum from the numbers is %d !",min);


    return 0;
}