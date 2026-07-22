#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("The purpose of this programe is to test if a particular number obeys the Collatz Conjecture\n");
    int number = get_int("Please enter a positive integer to check whether it obeys the collatz conjecture: ");

    while (number <= 0)
    {
        printf("Error! Please a positive integer only!");
        number = get_int("Please give a valid to check: ");
    }

    printf("The Collatz sequence of the given number is: \n");
    printf("%i -> ", number);

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number = number/2;
        }
        else
        {
            number = 3 * number + 1;
        }
        printf("%i -> ", number);
    }

    printf("4 -> 2 -> 1");


    printf("\n");
    printf("Thus, the given number obeys the Collatz conjecture!\n");

}
