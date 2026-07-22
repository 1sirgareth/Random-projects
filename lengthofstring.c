// This is a program to calculate length of string inputted by user. A standard program in several libraries.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string text = get_string("Input: ");
    int length = 0;

    while (text[length] != '\0') // Remember, singular characters always use single quotes.
    // The \0 is the null terminator. It tells the compiler that the code ends there.
    {
        length++;
    }

    printf("Length of string: %i\n", length);

}
