#include<stdio.h>
int main()
{
    int sp, p;
    float cp;
    printf("Total selling price of 15 items is : ");
    scanf("%d",&sp);
    printf("Total profit earned : ");
    scanf("%d",&p);

    cp=(sp-p)/15.0;

    printf("Cost price of one item is : %f", cp);
    return 0;

}