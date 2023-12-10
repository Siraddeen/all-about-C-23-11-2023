#include <stdio.h>

int main()
{
    int sum = 0;

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Calculate the multiple of 8
        int multiple = 8 * i;

        // Add the multiple to the sum
        sum += multiple;
    }

    // Print the result
    printf("The sum of numbers occurring in multiples of 8 from 8 to 80 is: %d\n", sum);

    return 0;
}
