#include <cs50.h>
#include <stdio.h>

int fibonacci(int n);

int main(void)
{
    int number = get_int("Enter the fiboacci index you want to view: ");

    while (number < 0)
    {
        number = get_int("Please enter a non-negative value: ");
    }

    printf("The fibonacci number at index %i is %i.\n", number, fibonacci(number));

}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fibonacci(n-2) + fibonacci(n-1);
}
