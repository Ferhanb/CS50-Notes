// Check if a lowercase string's characters are in alfabetical order

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get user's input
    string text = get_string("Input: \n");


    // Iterate through each element in this string
    for (int i = 1; i < strlen(text); i++)
    {
        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0;
        }

    }
printf("Yes\n");
    // Check if it is alfabetical


    // Print out yes or no


}
