#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    int number = get_int("Number: ");
    printf("The factorial of %i is %i.\n", number, fact(number));
}


int fact(int n)
{
    if (n == 1)
    {
        return 1;
    } // Base case.

        return n * fact(n-1); // Recursive part.
}
