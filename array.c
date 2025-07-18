#include <cs50.h>
#include <stdio.h>

int const size = 5;

int main(void)
{


// Array of size 5

int numbers[size];
numbers[0] = 1;

// Each element is 2x the previous
// First is 1
for (int i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }
// Print Array one by one
for (int i = 0; i < size; i++)
{
    printf("%i\n" , numbers[i]);
}


}
