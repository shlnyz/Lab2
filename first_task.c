#include <stdio.h>

int main()
{
    int x;
    printf("Dear user!\n");
    printf("Enter a number, I will print its square! ");
    scanf("%d", &x);
    x = (x * x);
    printf("x square is: "
           "%d",
           x);
    return 0;
}
