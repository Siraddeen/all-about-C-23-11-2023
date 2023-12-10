// #include <stdio.h>

// int main()
// {
//     int n = 8;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("value of multiple  %d is %d \n", n, n * i);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 8, m = 1;
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("value of multiple  %d is %d \n", n, n * i);
//         int am = n * i;
//         m += am;
//     }
//     printf("%d", m);
//     return 0;
// }

// using loops write sum of first 10 numbers       -------------------------------------------------------------------------------------

// #include <stdio.h>

// int main()
// {
//     int a = 1, m = 0;
//     while (a <= 10)
//     {
//         printf("a at now %d\n ", a);

//         m += a;
//         a++;
//     }
//     printf("value of sum %d", m);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int m = 0;
//     for (int i = 1; i <= 10; i++)
//     {
//         m += i;
//     }
//     printf("value of m is %d", m);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a = 0, m = 0;
//     do
//     {

//         m += a;
//         a++;
//     } while (a <= 10);
//     printf("value of sum from do while lop is %d", m);
//     return 0;
// }

// Calculate the sum of numbers occuring in multiple of 8 till 1 - 10   ( 8*1 to 8*10 ) -------------------------------------------------------

// #include <stdio.h>

// int main()                                         // using for loop
// {
//     int a = 8, m = 0, n;
//     for (int i = 0; i <= 10; i++)
//     {
//         n = i * a;
//         m += n;
//     }
//     printf("value of sum of multiples %d", m);
//     return 0;
// }

// #include <stdio.h>

// int main()                               // using while loop
// {
//     int m = 1, n = 0, v = 0;
//     while (m <= 10)
//     {

//         v = 8 * m;
//         n += v;
//         // printf("value of m %d\n", m);
//         // printf("value of m %d\n", v);
//         printf("value of m %d\n", n);
//         m++;
//     }
//     printf("%d", n);
//     return 0;
// }

//  Calculate the factorial of a given number by for loop  & while loop  take 7   as example -----------------------------------------------

// #include <stdio.h>

// int main()                         // using for loop
// {
//     int s = 7, a = 1;
//     for (int i = 1; i <= s; i++)
//     {
//         a *= i;
//     }
//     printf("factrorial of 7 is %d", a);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a = 7, n = 1, mul = 1;
    while (n <= a)

    {

        mul *= n;
        n++;
    }
    printf("factorial of %d is %d ", a, mul);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int number = 7,factorial = 1,i = 1;

//     while (i <= number)
//     {
//         factorial *= i;

//         i++;
//     }

//     printf("The factorial of %d is: %d\n", number, factorial);

//     return 0;
// }
