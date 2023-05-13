#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b=0;
    while(b++, b<=a)
    {
        scanf("\n%d", &c);
        printf("%d\n", c*c);
    }
    return 0;
}