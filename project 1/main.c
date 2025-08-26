// my code 

#include<stdio.h>                                                                
#include<stdlib.h>
#include<time.h>

int main(){
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int no_of_guess=0;
    int guess=0;
    while (1){
        printf("Enter your Guess:");
        scanf("%d",&guess);
        if (guess!=randomNumber){
            if (guess>randomNumber){
                printf("Guess lower\n");
            }
            else if (guess<randomNumber)
            {
                printf("Guess Higher\n");
            }
            
        }
        else{
            printf("You gussed it correctly and it was %d\n",randomNumber);
            printf("You guessed in %d",no_of_guess);
            break;
        }
        no_of_guess++;
    }

    
    return 0;
}

/*
//VIDEO CODE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed_number<randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}*/