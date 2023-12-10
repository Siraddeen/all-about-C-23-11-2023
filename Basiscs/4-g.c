#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("%d", number);
    do
    {
        printf("Enter your guess \n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("heigher the number \n");
        }
        else if (guess > number)
        {
            printf("lower the number \n");
        }
        else
        {
            printf("you guessed correct number %d in attempt %d", number, nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}