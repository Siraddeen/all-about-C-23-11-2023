// using functions calculate the area of square.

#include <stdio.h>

int sq(int side);

int main()
{
    int a;
    printf("give side value of square \n");
    scanf("%d", &a);
    int area = sq(a);
    printf("area of the square is %d", area);
    return 0;
}

int sq(int side)
{
    return side * side;
}