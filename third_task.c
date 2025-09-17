#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Give me the a, b, c parameters of a second order equation, and I'll solve it! \n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    float ds = ((b * b) - (4 * a * c));
    if (ds < 0)
    {
        printf("This equation has no real solutions! ");
        return 0;
    }
    else if (ds == 0)
    {
        printf("The two roots are in the same place! ");
    }
    float x1 = (((-1 * b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
    float x2 = (((-1 * b) - sqrt((b * b) - (4 * a * c))) / (2 * a));
    printf("\n");
    printf("x1 equals to: "
           "%f",
           x1);
    printf("\n");
    printf("x2 equals to: "
           "%f",
           x2);
    return 0;
}