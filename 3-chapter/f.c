#include <stdio.h>
int main()
{
    int a, b, c, A, B, C;
    printf("Enter the sides of triangles.\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a!=b) && (b!=c) && (c!=a))
    printf("SCALENE");
    else if ((a == b) && (b == c))
    printf("EQUILATERAL");
    else printf("ISOSCELES");

    if ((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==b*b+a*a))   
    printf("\nRIGHT ANGLED");
    return 0;

}