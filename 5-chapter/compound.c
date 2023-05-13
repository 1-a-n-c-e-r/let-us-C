#include<stdio.h>
#include<math.h>
int main()
{
    double a, p, r, t, n, t1;
    printf("Initial Amount : ");
    scanf("%lf", &p);
    printf("\n");
    printf("Interest Rate : ");
    scanf("%lf", &r);
    printf("\n");
    printf("Time Period : ");
    scanf("%lf", &t);
    t1=t;
    printf("\n");
    printf("Number Of Times : ");
    scanf("%lf", &n);
    printf("\n");
    double b, c=0;
    for(b=0;b<n;b++)
    {
        c*=4;
        a=p*pow(1+r/100,t);
        printf("%0.2lf    %0.2lf    %0.2lf\n", a, a-c, 80*(c));
        t+=t1;
    }
    
    return 0;
}