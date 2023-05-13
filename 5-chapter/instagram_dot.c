#include<stdio.h>
int main()
{
    int count=0;
    char s;
    while(s!=';')
    {
        scanf("%c", &s);
        if(s==10) count++;
    }
    printf("%d", count);
    return 0;
}