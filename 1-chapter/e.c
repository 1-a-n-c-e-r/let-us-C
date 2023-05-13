#include<stdio.h>
int main()
{
    int l,b,r;
    printf("Enter the value of length and breadth of the rectangle respectively.\n");
    scanf("%d %d", &l, &b);
    printf("\nEnter the value of radius of the circle.\n");
    scanf("%d", &r);
    printf("\nThe area and perimeter of the rectangle is %d and %d respectively.", l*b, 2*(l+b));
    printf("\nThe area and circumference of the circle is %.2f and %.2f respectively.", 22.0/7.0*(r*r), 44.0/7.0*r);
    return 0;
    
}