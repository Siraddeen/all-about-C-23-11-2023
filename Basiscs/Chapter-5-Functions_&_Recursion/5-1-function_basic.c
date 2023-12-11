#include <stdio.h>

void display(); // -------------> Function Prototype

int main()
{
    int a;
    printf("starting display \n");
    display(); // ------------->  function call
    printf("finished   display part ");
    return 0;
}

void display()
{ // --------->  function  definition
    printf("hi every one \n");
}
