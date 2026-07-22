#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int identity_matrix[3][3]; // The first 3 signifies number of rows. The second 3 signifies number of columns.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                identity_matrix[i][j] = 1;
            }
            else
            {
                identity_matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", identity_matrix[i][j]);
        }
        printf("\n");
    }



}
