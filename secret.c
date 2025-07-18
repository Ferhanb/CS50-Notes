#include <cs50.h>
#include <stdio.h>

bool check_phrase(string);

int main(void)

{
    string phrase = get_string("What's the secret phrase? ");

    bool correct = check_phrase(phrase)

    if (correct == true)
    {
        printf("Come on in!\n");
    }

}

bool correct

    string password = "Please";

    if (strcmp(phrase, password) == 0)
    {
        return true;
    }

    return false;
