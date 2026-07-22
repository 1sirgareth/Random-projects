#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter a number to check if its a palindrome:\n");
    int reversed_number = 0;
    int m = n;

    while (m > 0)
    {

        int new_digit = m % 10;
        reversed_number = 10 * reversed_number + new_digit;
        m = m/10;
    }

    printf("Your number reversed is %i\n", reversed_number);


    if (reversed_number != n)
    {
        printf("Your number is not a palindrome!\n");
    }
    else
    {
        printf("Your number is a palindrome!\n");
    }
}
