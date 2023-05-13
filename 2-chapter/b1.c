#include<stdio.h>
int main()
{
    int a, b, c;
    int sum=0;
    printf("Enter a 5 digit number.\n");
    scanf("%d", &a);
    b=a%10;
    c=a/10;
    sum=sum+b*10000;

    b=c%10;
    c=a/100;
    sum=sum+b*1000;

    b=c%10;
    c=a/1000;
    sum=sum+b*100;

    b=c%10;
    c=a/10000;
    sum=sum+b*10;

    b=c%10;
    c=a/10000;
    sum=sum+b;

    printf("Sum of the digits is %d",sum);
    return 0;
}