#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if((year%4==0 && year==(year/4)*4) || year==year+1)
    printf("IT IS A LEAP YEAR");
    else 
    printf("IT IS NOT A LEAP YEAR");
    return 0;
}