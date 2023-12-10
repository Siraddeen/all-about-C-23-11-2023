/*
                runs first primarly then checks for loop condition   if it satisfies then run given loop for given amount of time

        this (do-while loop)will atleast executes once (runs do )

        while loop ----->  checks the condition & then executes the code
        do while loop -->  executes code & then checks the condition
*/

#include <stdio.h>

int main()
{
    int a = 0;
    do
    {

        printf("value of a is %d\n ", a);
        a++;
    } while (a <= 10);

    return 0;
}