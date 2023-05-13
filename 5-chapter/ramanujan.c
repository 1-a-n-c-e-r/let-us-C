#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=a;b++)
        {
            for(c=1;c<=100;c++)
            {
                for(d=1;d<=c;d++)
                {
                    if(a*a*a+b*b*b==c*c*c+d*d*d && a!=c && a!=d && b!=c && b!=c && a>c && a>d)
                    printf("%d = %d %d & %d %d\n", a*a*a+b*b*b, a, b, c, d);
                }
            }
        }
    }
    return 0;
}