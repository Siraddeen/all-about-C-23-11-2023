#include <stdio.h>

void morning();
void afternoon();
void night();

int main()
{
    morning();
    return 0;
}

void morning()
{
    printf("good morning\n");
    afternoon(); //-----------------------------> calling afternoon function from morning function
}
void afternoon()
{
    printf("good afternoon\n");
    night(); //-----------------------------> calling night function from mor function
}
void night()
{
    printf("good night\n");
}