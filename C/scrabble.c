#include <cs50.h>
#include <stdio.h>

int score(string user_input);

int main(void)
{
    string user_1 = get_string("Player 1: ");
    string user_2 = get_string("Player 2: ");

    int score_1 = score(user_1);
    int score_2 = score(user_2);

    if (score_1 == score_2)
    {
        printf("Tie!\n");
    }
    else if (score_1 > score_2)
    {
        printf("Player 1 wins!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}

int score(string user_input)
{
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int score = 0;
    int i = 0;
    while (user_input[i] != '\0')
    {
        int j = 0;
        while (j < 26)
        {
            if (letters[j] == user_input[i] || letters[j] - 32 == user_input[i])
            {
                score += points[j];
                break;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    return score;
}
