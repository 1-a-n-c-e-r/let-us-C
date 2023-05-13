#include<stdio.h>
int main()
{
    float a, b, c, d, e, f=0.0;
    
    for(a=1.0;a<8;a++)
    {
        c=1.0;
        for(b=1.0;b<a;b++)
        {
            c=c*b;
        }
        f=f+1/c;
    }
    printf("%f", f);
    return 0;
}