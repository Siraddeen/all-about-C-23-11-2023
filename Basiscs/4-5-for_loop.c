// increment one

#include <stdio.h>

int main()
{

    for (int a = 0; a < 12; a++)
    {
        printf("a value %d \n", a); // use a+1    to print 1 - 12
    }
    return 0;
}

/*
int main()
{
    int a = 2;

    for (a; a < 12; a++)
    {
        printf("a value %d \n", a); // use a+1    to print 1 - 12                        // also can use like this
    }
    return 0;
}
*/

// decrement one

#include <stdio.h>

int main()
{
    for (int i = 6; i; i--)
    {
        printf("%d\n", i); // this will print upto  6 5 4 3 2 1  then stops because until 0 c considers as ture
                           //   after that it cannot print until we explicitly say like   i > -2
    }

    return 0;
}