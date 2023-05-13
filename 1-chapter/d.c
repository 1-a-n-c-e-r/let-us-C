#include <stdio.h>
int main()
{
    int F;
    float C;

    printf("Enter the temperature of your city(in Fahrenheit): ");
    scanf("%d", &F);
    
    C=(F-32)*5.0/9.0;

    printf("\nThe temperature of your city(in celcius) is %.2f", C);
    return 0;
}