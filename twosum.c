#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int array[4] = {2, 7, 11, 15};
    int target = 9;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) // It is much more efficient to define j as j = i+1 instead of j = 0.
        {
            if (array[i] + array[j] == target && i != j)
            {
                printf("[%i,%i]\n", i, j);
                return 0;
            }
        }
    }
}
