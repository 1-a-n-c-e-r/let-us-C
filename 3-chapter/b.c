#include<stdio.h>
int main()
{
    int a;
    printf("Give an integer:");
    scanf("%d", &a);
    a%2==0?printf("EVEN"):printf("ODD");
    return 0;

}