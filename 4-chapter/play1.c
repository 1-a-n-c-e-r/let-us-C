#include<stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q;
    for(a=1;a<100;a++)
    {
        b=176;
        c=176;
        d=176;
        e=176;
        f=176;
        g=176;
        h=176;
        i=176;
        j=176;
        k=176;
        l=176;
        m=176;
        n=176;
        o=176;
        p=176;
        if(a%15==0) b=2;
        else if(a%15==1) c=2;
        else if(a%15==2) d=2;
        else if(a%15==3) e=2;
        else if(a%15==4) f=2;
        else if(a%15==5) g=2;
        else if(a%15==6) h=2;
        else if(a%15==7) i=2;
        else if(a%15==8) j=2;
        else if(a%15==9) k=2;
        else if(a%15==10) l=2;
        else if(a%15==11) m=2;
        else if(a%15==12) n=2;
        else if(a%15==13) o=2;
        else if(a%15==14) p=2;

        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",  b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
    }
    return 0;
}