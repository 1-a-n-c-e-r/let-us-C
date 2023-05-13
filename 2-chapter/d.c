#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("Enter the amount of money you want to withdraw.\n");
    scanf("%d",&a);
    
    b=a/100;
    c=a%100;
    d=d+b;

    b=c/50;
    c=c%50;
    d=d+b;

    b=c/10;
    c=c%10;
    d=d+b;

    b=c/5;
    c=c%5;
    d=d+b;

    b=c/2;
    c=c%2;
    d=d+b;

    b=c/1;
    d=d+b;

    printf("The minimum number of notes you will get is %d", d);
    return 0;



}