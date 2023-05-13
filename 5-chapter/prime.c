#include<stdio.h>
int main()
{
    int a;
    int b;
    for(a=1;a<=300;a++)
    {
        for(b=2;b<a;b++)
        {
            if(a%b==0)
            break;
            else if(a%b!=0 && b==a-1)
            printf("%d\n", a);
        }    
    }
    return 0;
}