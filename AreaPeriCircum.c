/*Calculating Area and Perimeter of a Rectangle and Area, Circumference of a Circle*/
#include <stdio.h>

int main()
{
    int lengthR,breadthR,radiusC;
    int aR,pR,aC,cC;

    printf("Enter the Length of Rectangle:");
    scanf("%d",&lengthR);

    printf("\nEnter the Breadth of Rectangle:");
    scanf("%d",&breadthR);

    printf("\nEnter the Radius of the Circle:");
    scanf("%d",&radiusC);

    //Formulas
    aR = lengthR * breadthR;
    pR = 2*(lengthR + breadthR);
    aC = 3.14 * (radiusC * radiusC);
    cC = 2 * 3.14 * radiusC;

    printf("\nArea of Rectangle is: %d",aR);
    printf("\nPerimeter of Rectangle is: %d",pR);
    printf("\nArea of Circle is: %d",aC);
    printf("\nCircumference of Circle is: %d",cC);

    return 0;
}
