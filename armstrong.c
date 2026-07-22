#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Enter a number to check if it's an armstrong number: ");

    while (number < 0)
    {
        printf("Please enter a positive integer only!\n");
        number = get_int("Enter a number to check if it's an armstrong number: ");
    }


    int m = number;
    int number_copy = number;
    int sum = 0;
    int number_ofdigits = 0;

    while (number_copy > 0)
    {
        number_copy = number_copy/10;
        number_ofdigits++;
    }



    while (number > 0)
    {
        int last_digit = number % 10;
        int add_to_sum = 1;

        for (int i = 0; i < number_ofdigits; i++)
        {
            add_to_sum = last_digit * add_to_sum;
        }

        sum = sum + add_to_sum;
        number = number/10;


    }

    if (sum == m)
    {
        printf("Given number is an Armstrong number!\n");
    }
    else
    {
        printf("Given number is not an Armstrong number!\n");
    }

}
