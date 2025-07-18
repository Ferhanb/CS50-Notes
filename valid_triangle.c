#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>


bool valid_triangle(float x, float y, float z);

int main(void)
{
    float x = get_float("Eerste zijde: \n");
    float y = get_float("Tweede zijde: \n");
    float z = get_float("Derde zijde: \n");

    if (valid_triangle(x, y, z))
    {
        printf("Valid \n");
    }
    else
    {
        printf("Not \n");

    }
}


bool valid_triangle(float x, float y, float z)

{
    // Kijk of input positieve getallen zijn
    if ( x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    // Kijk of de som van twee zijdes groter is dan de derde zijde

    if ( (x + y <= z) || (x + z <= y) || (z + y <= x))
    {
        return false;
    }
    return true;
}
