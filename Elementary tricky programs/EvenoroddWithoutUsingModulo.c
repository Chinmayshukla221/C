/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(((number/2)*2)==number)
    {
        printf("The entered number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}
