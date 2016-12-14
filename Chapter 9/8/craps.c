#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/*
Write a program that simulates the game of craps, which is played with two dice. On the
first roll, the player wins if the sum of the dice is 7 or 11. The player loses if the sum
is 2, 3, or 12. Any other roll is called the "point" and the game continues. On each subsequent
roll, the player wins if he or she rolls the point again. The player loses by rolling 7.
Any other roll is ignored and the game continues. At the end of each game, the program will ask
the user whether or not to play again. When the user enters a response other than y or Y, the program
will display the number of wins and losses and then terminate.

Write your program as three functions: main, roll_dice, play_game. Here are the prototypes for the
latter two functions:

int roll_dice(void);
bool play_game(void);

roll_dice should generate two random numbers, each between 1 and 6, and return their sum. play_game
should play one craps game (calling roll_dice to determine the out-come of each dice roll); it will
return true if the player wins and false if the player loses. play_game is also responsible for
displaying messages showing the results of the player's dice rolls. main will call play_game
repeatedly, keeping track of the number of wins and losses and displaying "you win" and "you lose"
messages. HINT: Use the rand function to generate random numbers. See the deal.c program in section
8.2 for an example of how to call rand and the related srand function.
*/

int roll_dice(void);
bool play_game(void);


int main(void)
{
	srand((unsigned) time(NULL));
	bool outcome;
	int win_count = 0, loss_count = 0;
	char choice;

	do
	{
		outcome = play_game();
		if(outcome)
		{
			printf("You win!!!\n\n");
			win_count++;
		}
		else
		{
			printf("You lose. ;-(\n\n");
			loss_count++;
		}

		printf("Would you like to play again? (Y/N): ");
		scanf(" %c", &choice);

	} while(toupper(choice) == 'Y');

	printf("Wins: %d\n", win_count);
	printf("Losses: %d\n", loss_count);

	return 0;
}


int roll_dice(void)
{
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}


bool play_game(void)
{
	int roll = roll_dice();
	int point = roll;

	printf("You rolled a %d\n", roll);

	if(roll == 7 || roll == 11)
	{
		return true;
	}
	else if(roll <= 3 || roll == 12)
	{
		return false;
	}
	else
	{
		printf("Point is %d\n", point);
	}

	for(;;)
	{
		roll = roll_dice();

		printf("You rolled a %d\n", roll);

		if(roll == point)
		{
			return true;
		}
		else if(roll == 7)
		{
			return false;
		}
	}

}