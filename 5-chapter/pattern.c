#include<stdio.h>
int main()
{
    int a, b, c, d=1, e, f;
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=200-2*a;b++)
        {
            printf(" ");
        }
        for(c=0;c<a;c++)
        {
            printf("%d   ", d);
            d++;
        }
        printf("\n");
        
    }
    return 0;
}