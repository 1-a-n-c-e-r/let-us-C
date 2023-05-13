#include<stdio.h>
int main()
{
    int a, b, c=0, d=-1, e=0;
    b=1;
    printf("To get results put 1000 and press enter\n");
    while(b!=1000)
    {
        scanf("%d", &b);
        if(b<0) c+=1;
        else if (b>0) d+=1;
        else if(b==0) e+=1;
    
        
    }

    printf("+-%d\n--%d\n0-%d\n", d, c, e);
    return 0;
}