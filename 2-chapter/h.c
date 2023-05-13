#include<math.h>
#include<stdio.h>
int main()
{
    
    int a;
    float sinx, cosx;
    printf("Input angle in degrees:\n");
    scanf("%d", &a);
    sinx=sin(22.0*a/1260.0);
    cosx=cos(22.0*a/1260.0);
    printf("sin(%d)=%.2f", a, sinx);
    printf("\ncos(%d)=%.2f", a, cosx);
    printf("\ncos^2(%d)+sin^2(%d)=%.2f", a, a, sinx*sinx + cosx*cosx);
    return 0;

}