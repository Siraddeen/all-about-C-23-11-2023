/*
                Write a program that generates a ransom number & asks the player to guess it.
                 if player guess is heigher than generated number we show "lower the number" , same for low numbwer
                      we show "kindly high the number".

                when the user guess is correct we show the same generated correct number from the game

                HINT :-    use loops   & random number generator
*/

#include <stdio.h>
#include <stdlib.h> // included for generating random number
#include <time.h>   // included for use case of time

int main()
{
    int number, guess, nguess;
    srand(time(0));
    number = rand() % 100 + 1; // Generates random number from 0-100
    // printf("the number is %d", number);
    //  create a loop running until the correct number is guessed
    do
    {
        printf("Guess the number between 1 - 100 \n ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower the number \n");
        }
        else if (guess < number)
        {
            printf("Heigher the number \n");
        }
        else
        {
            printf("you guessed in %d attempt \n", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}

// this is the best example to use    do_while_loop