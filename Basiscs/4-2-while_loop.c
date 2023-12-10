// the block of code keep executes as long as given condition is true

#include <stdio.h>

int main()
{
    int a;
    printf("hi give a value ");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d \n", a);
        a++;
    }

    return 0;
}

// keep in mind    that value you are gonna gave should be valid inless your system will suffer from infinite loop