#include <iostream>
#include <string>
#include <random>
#include <ctime>

const int BOARD_SIZE= 3;

using namespace std;

void welcome()
{
	cout << ("Hi! Welcome to my tic tac toe game.") << endl;
}
void explainRules()
{
	cout << ("Rules go here.") << endl;
}
bool someoneWon(string board[BOARD_SIZE][BOARD_SIZE])
{
	return true;
}
void playTurn(string&	 board[BOARD_SIZE][BOARD_SIZE], bool firstTurn)
{
	// Print out board for player
	printBoard(board);
	// Player chooses valid place to put piece
	int row = getPlayerInt();
	int col = getPlayerInt();
	// If player chose occupied spot, have them choose again
	while (unoccupiedSpace(board, row, col))
	{
		row = getPlayerInt();
		col = getPlayerInt();
	}

	// Board gets updated to reflect new piece
	// Print board again
	// Check if player won game
	// If they didn't win yet, switch turns
	// If board is full and no one won, call it a draw
}


int main()
{
	// Welcome user and tell them about game
	
	welcome();
	
	// Tell them how to play game
	
	explainRules();
	
	// Start game
	// Make constants
	string board[BOARD_SIZE][BOARD_SIZE];
	bool firstPlayersTurn;
	mt19937 randNumGen(time(NULL));

	// Make board blank
	for (int i = 0; i < BOARD_SIZE; i++)
		// Here is a one-dimensional array board [i]
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			board [i][j] = " ";
		}
	}

	// Randomly choose player to go first
	int randomNumber = randNumGen();
	// If our random number is even, player 1 goes first.
	firstPlayersTurn = (randomNumber % 2) == 0;

	// Playing the game
	while (!someoneWon())
	{
		playTurn(board, firstPlayersTurn);
	}
	
	// Upon ending game, ask user if they want to play again
	return 0;
}