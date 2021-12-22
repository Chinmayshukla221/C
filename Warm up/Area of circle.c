/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float r,area;
    printf("Enter the radius of the circle:");
    scanf("%f", &r);
    
    area = r*r*3.14;
    printf("Area of the circle is %f", area);
    return 0;
}
