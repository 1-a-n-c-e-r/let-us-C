#include<stdio.h>
int main()
{
    int a, i=1;
    for(scanf("%d", &a);a;a--)
    {
        i*=a;
    }
    printf("%d", i);
    return 0;
    
}