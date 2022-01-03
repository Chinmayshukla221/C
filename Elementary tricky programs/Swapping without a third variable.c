/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers");
    printf("\nEnter A:");
    scanf("%d", &a);
    printf("\nEnter B:");
    scanf("%d", &b);
    a=a+b;
    b=((b-a)*(-1));
    a=a-b;
    printf("Number A:%d",a);
    printf("Number B:%d",b);
    return 0;
}
