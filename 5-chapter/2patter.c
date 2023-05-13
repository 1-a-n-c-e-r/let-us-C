#include<stdio.h>
int main()
{
    int a, b, c, d=2, e=1, f, g, h, i, j, k, l;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=10-2*a;b++)
        {
            printf(" ");
        }
        printf("1   ");

        for(c=3;c<=a;c++)
        {
           if(c==3 && a==3) printf("3   ");
           else if(a==4 && (c==3 || c==4)) printf("3   ");
           else if(a==5 && (c==3 || c==5)) printf("4   ");
           else printf("6   ");
        }
        
        if(a!=1) printf("1");
        printf("\n");
    }
    return 0;
}