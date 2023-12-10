// write a programm to  to print number from 10-20 but the catch is  the intial value of number should be 0 .

#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("the value of i is %d \n", i);
        }

        i++;
    }

    return 0;
}