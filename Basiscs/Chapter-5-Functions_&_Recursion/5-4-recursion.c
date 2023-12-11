#include <stdio.h>

int factorial(int a);

int main()
{
    int d = 7;

    printf("The factorial value of %d is %d", d, factorial(d));

    return 0;
}

int factorial(int a)
{
    printf("value of a now is %d\n", a);

    if (a == 1 || a == 00)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1); // see in this line the code ot self calling it even before it executed
    }
}

/*    NOTEs
              Recursion is sometimes the most direct way to code algorithms
              If the condition doesn't call function any further in recursive function is called       base condition

              keep in mind :-   a mistake made by programmer a recursive function can keep running without returning a resulting in memory.

*/