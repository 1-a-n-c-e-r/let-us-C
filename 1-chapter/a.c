#include <stdio.h>
int main()
{
    int basic_salary;
    float gross_salary;

    printf("Enter your basic salary.\n");
    scanf("%d", &basic_salary);

    gross_salary = 0.4*basic_salary;

    printf("Your gross salary is %f", gross_salary);

    return 0;

}