#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int wins;
    int net_worth;
} team;

int main(void)
{
    const int size = 4;
    team roster[size];

    roster[0].name = "Radiant";
    roster[0].wins = 5;
    roster[0].net_worth = 45000;

    roster[1].name = "Dire";
    roster[1].wins = 3;
    roster[1].net_worth = 30000;

    roster[2].name = "Void";
    roster[2].wins = 5;
    roster[2].net_worth = 52000;

    roster[3].name = "Sentinel";
    roster[3].wins = 3;
    roster[3].net_worth = 31000;

    int swaps = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if ( (roster[j].wins < roster[j+1].wins) || (roster[j].wins == roster[j+1].wins && roster[j].net_worth < roster[j+1].net_worth) )
            {
                team temp = roster[j+1];
                roster[j+1] = roster[j];
                roster[j] = temp;
                swaps++;
            }
        }

        if (swaps == 0)
        {
            break;
        }
        swaps = 0;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%s ", roster[i].name);
    }
    printf("\n");



}
