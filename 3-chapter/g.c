#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    year%4==0?printf("THIS IS A LEAP YEAR"):printf("UNFORTUNATELY NOT");
    return 0;
}