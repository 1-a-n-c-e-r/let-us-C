#include<stdio.h>
int main()
{
    int a=65, b=66, c=67, d=68, e=69, f=70, g=71, h;
    for(h=1;h<=7;h++)
    {
        h==2?g=32:g;
        h==3?f=32:g;
        h==4?e=32:g;
        h==5?d=32:g;
        h==6?c=32:g;
        h==7?b=32:g;
        printf("%c %c %c %c %c %c %c %c %c %c %c %c %c\n",a,b,c,d,e,f,g,f,e,d,c,b,a);
    }
    return 0;
}