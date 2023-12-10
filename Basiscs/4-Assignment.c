/*

// 1.Question    print multiplication table of given n number

#include <stdio.h>

int main()
{
    int n;
    printf("give your number \n");
    scanf("%d", &n);
    for (int i = 0; i <= 10; ++i) // here if i use  i++   i would not   get answer so always be contiousness while usin     i++     & ++i
    {
        printf("value of your multiple %d \n", n * i);
    }
    return 0;
}

                                     i--          dicrease
int main()
{
    int n;
    printf("give your number \n");
    scanf("%d", &n);
    for (int i = n; i; i--) // here if i use  i++   i would not   get answer so always be contiousness while usin     i++     & ++i
    {
        printf("value of your multiple %d \n", n * i);
    }
    return 0;
}
*/

/*
// 2.Quetion   using while loop write sum of first 10 numbers

#include <stdio.h>

int main()
{
    int i = 1, a = 0;
    while (i <= 10)

    {
        a += i;
        i++;
    }

    printf("sum of the obtained values is %d", a);

    return 0;
}

// using for loop

# include <stdio.h>

int main(){
    int i,a=0,n=10;
    for(i=0;i<=n;i++){
        a+=i;
    }
    printf("sum of 0-10 is %d", a);
    return 0;
}



//   using    do-while loop

#include <stdio.h>

int main()
{
    int i = 1, a = 0;
    do
    {
        a += i;
        i++;
    } while (i <= 10);
    printf("value of a is %d\n", a);

    return 0;
}

*/

/*

// 3.Question   Calculate the sum of numbers occuring in multiple of 8 till 1 - 10   ( 8*1 to 8*10 )

#include <stdio.h>

int main()
{
    int a = 8, s, v;
    for (int i = 1; i < 11; ++i)
    {
        printf("  value of a multiples %d\n", i * a);
        int m = i * a;                                                 // took too much time copied from gpt
        s += m;
    }
    printf("sum of multiple values %d", s);
    return 0;
}

*/

/*
//  4.Question calculate the factorial of a given number by for loop  & while loop         take 7   as example

// using for loop

#include <stdio.h>

int main()
{
    int a = 1, n = 7, fact = 1;
    for (int i = 1; i <= n; i++) // factorial   7  ------->1*2*3*4*5*6*7
    {
        fact *= i;
    }
    printf("factorial of n %d is %d", n, fact);

    return 0;
}


// using while loop                     take 8   as example

#include <stdio.h>

int main()
{
    int a = 1, n = 8, fact = 1;
    while (a <= n)
    {
        fact *= a;
        a++;
    }
    printf("factorial of %d is %d", n, fact);
    return 0;
}

*/



/*
// 4.Question     Check whether the given number is prime number or not using loop

#include <stdio.h>

int main()
{
    int a;
    printf("give your number : \n");
    scanf("%d", &a);
    while (a < 1)
    {
        if ((a % a) == 1 | a )                       // not enough knowledge yet
        {
        }
    }

    return 0;
}
*/