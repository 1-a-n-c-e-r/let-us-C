#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    for(f=11;f<=100000;f++)
    {
        a=f;
        e=0;
        c=0;

        for(b=0;a;a/=10)
        {
            b=a%10;
            e=e+b*b*b;
        }
        if(f==e)
        printf("%d\n", e);
    }
    return 0;
}