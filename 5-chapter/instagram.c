#include<stdio.h>
int main()
{
    int count=0, count2=5;
    char str[100];
    for(;count2;count2--)
    {
        scanf("%[^\n]s",str);
        // if(str[0]==';') break;
        count++;
        printf("%s\n",str);
    }
    printf("%d", count);
    return 0;
}