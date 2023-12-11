/*
// write a programme using functions to calculate average value of 3 numbers

#include <stdio.h>
int ff(int a, int b, int n);

int main()
{
    int m = ff(42, 12, 11);
    printf("Average is %d", m);

    return 0;
}
int ff(int a, int b, int n)
{
    int v = (a + b + n) / 3;
    return v;
}*/

/*
#include <stdio.h>
int fib(int a);
int main()
{
    for (int i = 0; i < 8; ++i)
    {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}
int fib(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}
*/

// Quetion.6  write a recursive function to sum the first n natuaral numbers

#include <stdio.h>
int gg(int a);

int main()
{
    printf("added value %d", gg(8));
    return 0;
}

int gg(int a)
{
    int s = 0;

    for (int k = 0; k <= a; k++)
    {
        s += k;
    }

    return s;
}