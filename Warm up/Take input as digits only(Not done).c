/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 0;
    int getintegeronly();
    x=getintegeronly();
    printf("\nThe number is %d", x);
    return 0;
}
int getintegeronly()
{
    int num = 0,ch;
    do{
        ch = getchar();
        if(ch >= 48 && ch <= 57)
        {
            printf("%c", ch);
            num = num*10 + (ch-48);
        }
        if(ch==13)
            break;
    }while(1);
    return (num);
}
