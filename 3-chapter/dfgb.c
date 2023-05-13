#include<stdio.h>
int main()
{
    int a, b, c, y;

    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    y=(a>b?(b>c?a:(c>a?c:a)):(b>c?b:c));
    printf("%d", y);

    return 0;

}