/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("The %d is greater that %d.",a,b);
        return 0;
    }
    else{
        printf("The %d is greater that %d.",b,a);
        return 0;
    }
}
