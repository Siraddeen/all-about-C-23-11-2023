// here   a & b   are the Parameters          &&       5 & 8   are the arguments

#include <stdio.h>

int sum(int a, int b); // -------------> Function Prototype

int main()
{
    int b;
    b = sum(5, 8); // ------------->  function call
    printf("the sum value is %d \n", b);
    return 0;
}

int sum(int a, int b) // --------->  function  definition
{
    int fd;
    fd = a + b;
    return fd;
}