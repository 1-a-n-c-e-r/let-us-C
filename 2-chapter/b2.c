#include<stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter a 5 digit number.\n");
    scanf("%d", &a);
    b=a%10;
    c=(a%100-a%10)/10;
    d=(a%1000-a%100)/100;
    e=(a%10000-a%1000)/1000;
    f=(a%100000-a%10000)/10000;
    printf("Sum of the digits is %d", b*10000+c*1000+d*100+e*10+f);
    return 0;
}