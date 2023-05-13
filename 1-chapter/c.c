#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the marks you obtained in 5 subjets:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("...............................\n");
    printf("Your aggregate marks are %d\nAnd your percentage obtained is %.2f\n", a+b+c+d+e, (a+b+c+d+e)*0.2);
    printf("...............................\n");
    return 0;

}