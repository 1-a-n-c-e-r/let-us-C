#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float d, e;

    printf("Enter the value of all three sides of triangle.\n");
    scanf("%d %d %d", &a, &b, &c);
    d=(a+b+c)/2.0;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    printf("Area of the triangle is %.2f", e);
    return 0;
}