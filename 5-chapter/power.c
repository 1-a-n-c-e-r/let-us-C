#include<stdio.h>
int main()
{
    int a, b, c=1;
    for(scanf("%d %d", &a, &b);b;b--)
    {
        c*=a;
    }
    printf("%d", c);
    return 0;
}