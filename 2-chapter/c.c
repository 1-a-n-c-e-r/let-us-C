#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a 4 digit number\n");
    scanf("%d", &a);
    b=a%10;
    c=a/1000;
    printf("Sum of it's first and last digit is %d", b+c);
    return 0;
}