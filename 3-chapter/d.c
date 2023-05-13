#include<stdio.h>
int main()
{
    int year;
    printf("Type an Year:");
    scanf("%d", &year);
    year=year-2000;
    if((year+year/4)%7==0)
    printf("SUNDAY");
    else if((year+year/4)%7==1)
    printf("MONDAY");
    else if((year+year/4)%7==2)
    printf("TUESDAY");
    else if((year+year/4)%7==3)
    printf("WEDNESDAY");
    else if((year+year/4)%7==4)
    printf("THRUSDAY");
    else if((year+year/4)%7==5)
    printf("FRIDAY");
    else if((year+year/4)%7==6)
    printf("SATURDAY");
    return 0;
}