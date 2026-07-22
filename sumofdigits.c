#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int n = get_int("Please enter a number to calculate the sum of its digits:\n");
   int sum = 0;

   while (n > 0)
   {
    sum = sum + n % 10;
    n = n/10;
   }

   printf("The required sum is %i :)\n", sum);

}
