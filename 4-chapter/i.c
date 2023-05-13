#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number.\n");
    scanf("%d", &a);
    for(b=2;b<a/2;b++)
    if(a%b==0)
    {
        printf("Its not a prime number\n");
        break;
    }
    if(b==a/2)
    printf("This is a prime number\n");
    
    return 0;
}