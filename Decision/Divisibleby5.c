/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("The number is divisible by five.");
        return 0;
    }
    else{
        printf("The number is not divisible by five.");
        return 0;
    }
}
