#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k,sp;

    //print 7th row
    for(i=0;i<=15;i++)
    {
        for(j=65;j<=80-i;j++) //loop for first half
        {
            printf("%c ",j);

        }

        //add space between these string
        for(sp=1;sp<=i*2;sp++)
            printf("  ");

        for(k=80-i;k>=65;k--) //loop for next half (Second half)
        {
            printf("%c ", k);
        }


    printf("\n");
    }
}