#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i=0, j, k, l;
    printf("Now, enter a 4 digit number.\n");
    scanf("%d", &a);
    for(b=1;b<=2;b++)
    {
        e=d;
        c=a%100;
        d=c;
        a=a/100;
    }
    for(b=1;b*b<=d;b++)
    {
        f=b;
        //l is the counter of the square root
        l=b;
        g=d-b*b;
    }
    for(h=1;i>=0;h++)
    {
        
        i=((g*100+e)-((20*f+h)*h));
        
    }

    printf("Square root of the number is %d",10*l+h-2);
    return 0;
}