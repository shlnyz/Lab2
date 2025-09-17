/*1-20 increasing with while loop*/
/*#include <stdio.h>
int main()
{
    // declare  variable, set its value to 1
    int n = 1;
    while (n <= 20)
    {
        printf("%d", n);
        printf("\n");
        n = n + 1;
    }
    return 0;
}
*/

/*implemented for loop and bounds at once*/
/*#include <stdio.h>
int main(void)
{
    int lower, upper;
    printf("Enter the lower bound! 1-20 ");
    scanf("%d", &lower);
    printf("Enter the upper bound! 1-20 ");
    scanf("%d", &upper);
    for (int n = lower; n <= upper; n++)
    {
        printf("%d", n);
        printf("\n");
    }
    return 0;
}
*/

/*same program, but rebuilt for cases of reversed bounds*, UNFINISHED*/
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the first bound!");
    scanf("%d", a);
    printf("Enter the second bound!");
    scanf("%d", b);
    // int from, to;
    // if (a < b){
    //     int from = a;
    //     int to = b;
    //     for ()

    // }

    return 0;
}

/*if you are ready, please go to the files on the right and open create a new file named fifth_task.c for
that you can hover your mouse over the "src" folder, right click and select "New File",
then type the name of the file and press enter (do not forget the extension .c)*/

/*if you are ready with that too, you can commit your changes by clicking the Source Control icon on the left sidebar (the one that looks like a branch with a dot on it),
then type a message in the message box at the top (for example "completed fourth task and created fifth_task.c file") and click the checkmark button above the message box to commit your changes
in this way you can keep track of your progress and go back to previous versions if needed in your local respository!*/