#include<stdio.h>
int main()
{
    int i=0;
    while(i<10000000)
    {
        printf("0%d\n",i%10);
        i++;
    }
    return 0;

}