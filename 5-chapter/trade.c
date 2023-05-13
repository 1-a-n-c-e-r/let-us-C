#include<stdio.h>
int main()
{
    int a, c=0, d, f;
    float b=9.0, g=9.0, sum=720.0, sum1=9.0;
    for(a=1;a<=270;a++)
    {

        b+=b/20.0;
        if(a%1==0) c++;
        if(a%1==0) printf("%d    %f    %f   %f      %f      %f\n", c, b, (b-g), (b-g)*80, sum1+=b-g, sum+=(b-g)*80);
        if(a%1==0) printf("\n");
        if(a%1==0) g=b;
    }
    return 0;
}