/*
            FUNCTION
                      a function is a block of code which can be reused by programmer in a given number of times at required places
*/

/*
    FUNCTION   syntax


    #include<stdio.h>

    void display();    // -------------> Function Prototype

    int main(){
        int a;
        display();     // ------------->  function call
        return 0;
        }

    void display(){        // --------->  function  definition
        printf("hi every one ");
    }
*/

/*
    function prototype   :-     a way to tell the compiler about the function we are gonna define

    function call    :-     a way to tell the compiler to execute the function body @ the time call is made

    function definition  :-   contains set of instructions which are executed  during the function call

*/

#include <stdio.h>

void mor();
void afte();
void night();

int main()
{
    mor();
    afte();
    night();
    return 0;
}

void mor()
{
    printf("good morning\n");
}
void afte()
{
    printf("good afternoon\n");
}
void night()
{
    printf("good night\n");
}

/*   NOTES

         a function can only return only one value at a time


*/

/*
      RECURSION

              A function calling itself is called recursive function.
*/