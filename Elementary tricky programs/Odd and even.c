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
    if(number & 0x01==0x01)
    {
        printf("The entered number is odd");
    }
    else
    {
        printf("The number is even");
    }
    return 0;
}
