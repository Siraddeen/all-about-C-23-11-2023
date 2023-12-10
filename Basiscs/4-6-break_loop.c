// this break loop can be used in all kind of loop like   for  &  do while loop

#include <stdio.h>

int main()
{
    int s = 0;
    do
    {
        printf("value of s  %d\n", s);
        if (s == 5)
        {
            break; // 2) now at 5   the loop breaks
        }

        s++; // if break loop upside it will print until 5      if it is down it will print upto 4

    } while (s < 10); // 1) this will countinue until 9    to break use

    return 0;
}