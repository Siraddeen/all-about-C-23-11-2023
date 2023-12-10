// create a programm to print number in order vise from 0 given number, using  user input(scanf) using    do while loop

#include <stdio.h>

int main()
{
    int a = 0;
    int s;
    printf("enter value of s  \n");
    scanf("%d", &s);

    do
    {

        printf("value of a now is %d \n", a + 1);
        a++;

    } while (a < s);

    return 0;
}