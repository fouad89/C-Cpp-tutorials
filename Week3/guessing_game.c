#include <stdio.h>
#include <stdlib.h>

int main(){
    int secretNum = 7;
    int numGuesses = 0;
    int guessLimit = 3;
    int userInput;
    int outOfGuesses = 0;

    printf("You have 3 guesses: ");
    while ((userInput != secretNum) && (outOfGuesses == 0))
        {
            if (numGuesses < guessLimit)
            {
                printf("Your guess in incorrect, try again: \n");
                scanf("%d", &userInput);
                numGuesses++;
            }else{
                outOfGuesses=1;
                break;
            }

        }
    if (outOfGuesses == 1)
    {
        printf("You Lose!\n");
    }else{
        printf("You win!\n");
    }
    
        

        return 0;
}
