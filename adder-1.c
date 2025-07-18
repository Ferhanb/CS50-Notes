#include <cs50.h>
#include <stdio.h>

int add_two(int a, int b);

int main(void)
{
    int x = get_int("First number? \n");

    int y = get_int("Second number? \n");

    int z = add_two(x,y);
    printf("The adding of %i and %i is %i\n", x, y, z);
}

int add_two(int a, int b)
{
    int add_two = a + b;
    return add_two;
}
