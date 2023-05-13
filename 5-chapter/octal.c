#include <stdio.h>
int main()
{
    int a, b, c;
    for(scanf("%d", &a), b=a;b;b*=1)
    {
        c=b%8;
        printf("%d", c);
        b/=8;
        
    }
    return 0;
    
}