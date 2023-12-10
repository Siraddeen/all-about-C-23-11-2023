// countinue used to move immediately to the next item/iteration of the loop

#include <stdio.h>

int main()
{
    int a = 5;
    int s = 0;
    while (s < 10)
    {
        s++;
        if (s != a)
        {
            continue;
        }
        else
            (printf("%d", s));
    }

    return 0;
}