#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        for(c=1;c<=17-2*a;c++)
        {
        printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            if(b==9) printf("");
            else printf("*");
        }
        printf("\n");
    }
    for(a=1;a<=8;a++)
    {
        for(b=9-a;b;b--)
        {
            printf("*");
        }
        for(c=1;c<=2*a-1;c++)
        {
        printf(" ");
        }
        for(b=9-a;b;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}