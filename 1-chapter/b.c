#include <stdio.h>
int main()
{
    int dis;
    printf("Enter the distance between two cities(in km.)\n");
    scanf("%d", &dis);
    printf(".................................. \n");
    printf("The distance between two cities is:\n%d(in meters)\n%f(in feets)\n%f(in inches)\n%d(in centimetrs)",
    1000*dis, 3280.8399*dis, 39370.0787*dis, 100000*dis);
    return 0;
}