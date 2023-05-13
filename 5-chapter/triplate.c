#include<stdio.h>
int main()
{
    int a, b, c, d=0, e, f, g;
    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            for(c=1;c<=b;c++)
            {
                if(a*a==b*b+c*c)
                {
                printf("%d %d %d\n", a, b, c);
                d=b;
                }
            }
        }
    }
    return 0;
}