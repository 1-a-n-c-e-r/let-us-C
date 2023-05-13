#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    for(a=1;a<=20;a++)
    {
        if(a%2==0)
        {
        for(b=1;b<=a;b++)
        {
            b%2==0?c=2:(c=4);
            printf("%d  ", c);
        }
        }
        else
        {
        for(b=1;b<=a;b++)
        {
            b%2==0?c=4:(c=2);
            printf("%d  ", c);
        }
        }
        printf("\n");
    }
    return 0;
}