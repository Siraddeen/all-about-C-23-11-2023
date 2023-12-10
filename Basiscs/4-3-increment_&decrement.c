//        there are 2 types of increment    1) a++    increment after code run           2) ++a    first increment then run code

#include <stdio.h>

int main()
{
    int a = 4;
    printf("value of a++ is %d \n", a++); // see here value of a isn't change untill it executed
    printf("value of a is %d\n", a);
    int i = 8;
    printf("value of ++i is %d\n ", ++i); // see here value of a changed while it has been executed
    printf("value of i is %d\n", i);
    return 0;
}

/*                                    DECREMENT
// same goes for decremet         1) a--    decrement after code run           2) --a    first decrement then run code

#include <stdio.h>

int main()
{
    int a = 4;
    printf("value of a-- is %d \n", a--); // see here value of a isn't change untill it executed
    printf("value of a is %d\n", a);
    int i = 8;
    printf("value of --i is %d\n ", --i); // see here value of a changed while it has been executed
    printf("value of i is %d\n", i);
    return 0;
}

*/

// there is no      +++           or      --- operator in c
// += adds direct value to given one          if    a = 10   & you write    a  += 12              then a converts into    22