//WAP to display the ASCII value of a given Character
#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter any character: ");
    ch = getche();
    printf("The corresponding ASCII value is %u",ch,ch);
    
    return 0;
}