/**
 * This program plays a guessing game with the user.
 * It selects a random number between 1 and 1000 and
 * prompts the user to guess the value, informing them
 * of whether or not it is higher or lower than the
 * actual value.  Once the user guesses correctly, the
 * game ends and the number of guesses is displayed.
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv) {

  // the game will be played by creating a random
  // number between 1 and 1000
  int n = 1000;

  // seed the random number generator
  srand(time(NULL));
  // the program generates a random number between 1 and 1000
  // the user will try to guess what this number is
  int number = (rand() % n) + 1;

  // initialize the user's "guess" to be an invalid value
  int guess = -10;
  int numGuesses = 0;

  printf("Guess-A-Number Game!\n");
  printf("Enter a number between 1 and %d\n", n);

  //TODO: place your code here
  while (1)
{
 printf("Enter your guess :");
 scanf("%d",&guess);
 numGuesses++;
 if (guess == number)
 {
  printf("Congratulations, you found it! Number of guesses: %d\n", numGuesses);
 
 break;
}
else if (guess<number)
{
   printf("Your guess is too low. Try again.\n");
}
else
{
  printf("Your guess is too high , try again\n");
}



 
}
return 0;
}

// output

/*
PS C:\Users\talha\Desktop\LAB WORK\CSCE155-C-Lab04> cd src
PS C:\Users\talha\Desktop\LAB WORK\CSCE155-C-Lab04\src> gcc .\guessingGame.c
PS C:\Users\talha\Desktop\LAB WORK\CSCE155-C-Lab04\src> .\a.exe
Guess-A-Number Game!
Enter a number between 1 and 1000
Enter your guess :150
Your guess is too high , try again
Enter your guess :90
Your guess is too high , try again
Enter your guess :70
Your guess is too high , try again
Enter your guess :65
Your guess is too high , try again
Enter your guess :60
Your guess is too high , try again
Enter your guess :50
Your guess is too low. Try again.
Enter your guess :55
Your guess is too low. Try again.
Enter your guess :56
Your guess is too low. Try again.
Enter your guess :57
Congratulations, you found it! Number of guesses: 9


*/