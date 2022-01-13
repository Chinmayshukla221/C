#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    printf("\nEnter the thrid number:");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    {
        printf("\nThe first number %d is the greatest number.",a);
    }
    if((b>a)&&(b>c))
    {
        printf("\nThe second number %d is the greatest number.",b);
    }
    if((c>b)&&(c>a))
    {
        printf("\nThe third number %d is the greatest number.",c);
    }
    if(a==b==c)
    {
        printf("\nAll the entered numbers are equal.");
    }
    else
    {
        printf("\nTwo numbers are equal.");
    }
    return 0;
}