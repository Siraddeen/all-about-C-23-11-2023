
/*

// Question.1    write a programme using functions to calculate average value of 3 numbers

#include <stdio.h>
int average(int a, int b, int c);

int main()
{
    int s = average(6, 9, 21);
    printf("The average of numbers is %d", s);

    return 0;
}

int average(int a, int b, int c)
{
    int av = (a + b + c) / 3;
    return av;
}
                                              // Question 1    is   done
*/

/*
// Question.2      write a function to convert celcius to farenheit temperature

#include <stdio.h>
float temp(int celcius);

int main()
{
    int cel;
    printf("give temperature in celcius \n ");
    scanf("%d", &cel);
    printf("The temperatuure in farenheit is %f", temp(cel));

    return 0;
}

float temp(int celcius)
{
    float farenheit = (float)((celcius * 1.8) + 32);
    return farenheit;
}
*/

/*
// Question.3   Calculate via funtion, force of attractionon a body of mass m exerted byearth   ( g=9.8m/s2)

#include <stdio.h>
float fo(int g);
int main()
{
    float force_of_ball = 10;
    printf("The mass of ball is %f  m/s2", fo(force_of_ball));

    return 0;
}
float fo(int g)
{
    int mass = (float)(g * 9.8);
    return mass;
} // Q3   is done

*/

/*
// Question.4     Using recursion calculate (n)th element of fibonaki series

#include <stdio.h>

int fi(int a)
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
        return fi(a - 1) + fi(a - 2);
    }
}

int main()
{
    int k = 8;
    for (int i = 0; i < k; ++i)
    {
        printf("%d ", fi(i));
    }
    printf("\n");
    return 0;
}                                        // Q4   is done
*/

/*
// Question.5
#include <stdio.h>

int main()
{
    int a;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}                     // answer     2 2 0  wtf       can't able to understand
*/

/*
// Quetion.6  write a recursive function to sum the first n natuaral numbers

#include <stdio.h>

int sum(int a)
{
    int s = 0;
    int i = 1;
    do
    {

        s += i;
        i++;
    } while (i <= a);
    return s;
}

int main()
{
    int d = 8;
    printf("value of sum %d", sum(d));

    return 0;
}
*/

/*
// Question.7   Using function   print following pattern for n number of times (example 4)
*
***
*****
******                  odd numbers
*/

#include <stdio.h>

void pat(int a)
{
    if (a == 1)
    {
        printf("* \n");
    }
    else
    {
        pat(a - 1);
        for (int p = 0; p < (2 * a - 1); p++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    pat(14);
    return 0;
} // Q7 complete