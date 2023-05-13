#include<stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d", &a);
    for(b=0;b<a;b++)
    {
        scanf("%d", &c);
        if(b==0) d=c;
        else if(b==1 && c>d) e=c;
        else if(b==1 && c<=d)
        {
            e=d;
            d=c;
        }
        else if(c<d) d=c;
        else if(c>e) e=c;
        

    }
    printf("%d", e-d);
    return 0;
}