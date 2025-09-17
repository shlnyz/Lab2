#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, y1, x2, y2;
    printf("Please give me two coordinates, and I calculate their distance! (x;y)\n");
    printf("x1: ");
    scanf("%d", &x1);
    printf("y1: ");
    scanf("%d", &y1);
    printf("x2: ");
    scanf("%d", &x2);
    printf("y2: ");
    scanf("%d", &y2);
    float d = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    printf("The calculated distance is: "
           "%f",
           d);
    return 0;
}