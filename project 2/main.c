#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(0));
    int score = 0;
    while (1)
    {
        int player, computer = rand() % 3;
        char input[10], c_input[10];
        char result, choice;
        /*
        0-> Snake
        1-> Water
        2-> Gun
        */
        printf("Enter your choice(snake,water,gun):");
        scanf("%s", input);

        if (strcmp(input, "snake") == 0)
        {
            player = 0;
        }
        else if (strcmp(input, "water") == 0)
        {
            player = 1;
        }
        else if (strcmp(input, "gun") == 0)
        {
            player = 2;
        }
        else
        {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        if (computer == 0)
        {
            strcpy(c_input, "snake");
        }
        else if (computer == 1)
        {
            strcpy(c_input, "water");
        }
        else if (computer == 2)
        {
            strcpy(c_input, "gun");
        }

        if (player == computer)
        {
            result = 't';
        }
        else if ((player == 0 && computer == 1) || (player == 1 && computer == 2) || (player == 2 && computer == 0))
        {
            result = 'p';
        }
        else if ((player == 0 && computer == 2) || (player == 1 && computer == 0) || (player == 2 && computer == 1))
        {
            result = 'c';
        }

        printf("You choose %s and computer choose %s\n", input, c_input);
        if (result == 'p')
        {
            printf("You win\n");
            score += 1;
        }
        else if (result == 'c')
        {
            printf("You lost\n");
            score -= 1;
        }
        else if (result == 't')
        {
            printf("Match tied\n");
        }

        printf("Want to exit(y/n):");
        scanf(" %c", &choice);
        if (choice == 'y')
        {
            printf("Your score is %d\n", score);
            printf("bye");
            break;
        }
    }
    return 0;
}