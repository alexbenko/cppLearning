#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

/* Tic-Tac-Toe board represented as a 2-dimensional int array, where 0 is X and
 * 1 is O.
 *
 


 /* Some nice names for common values.  For example, to set the upper right
  * "square" of a board to X, we could write this::
  *
  *   board[0][2] = 0;
  *
  * But I've declared these names here so that we can instead write this::
  *
  *   board[FIRST][THIRD] = X;
  */
const int FIRST = 0;
const int SECOND = 1;
const int THIRD = 2;
const int X = 0;
const int O = 1;



bool isWinningRow(int board[][3])
{
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) return true;
	}

	return false;
}



bool isWinningCol(int board[][3])
{
	for (int i = 0; i < 3; i++) {
		if (board[0][i] == board[i][1] && board[0][i] == board[2][i]) return true;
	}
	return false;  
}



bool isWinningLeftToRightDiag(int board[][3])
{
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) return true;

	else return false;
}



bool isWinningRightToLeftDiag(int board[][3])
{
	if (board[1][1] == board[0][2] && board[1][1] == board[2][0])  return true;
	
		return false;
}



bool isWinningBoard(int board[][3])
{
	if (isWinningRow(board) == 1 || isWinningCol(board) == 1 || isWinningLeftToRightDiag(board) == 1 || isWinningRightToLeftDiag(board) == 1) {
		return true;
	}
	 
	return false;
}


string intToMark(int i)
{
	if (i == 0) {
		return "X";
	}
	return "O";
}

string boardToString(int board[][3])
{
	string theString = " ";
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3; x++) {
			theString += intToMark(board[i][x]);
		}
	}
	return theString; 
}



void randomlyInitBoard(int board[][3])
{
	

	for (int i = 0; i < 3 ; i++) {

		for (int x = 0; x < 3; x++) {
			board[i][x] = rand() % 2;
		}

	}
}



int main()
{
	// Unused, just to show you the structure of a board.
	int exampleBoard[3][3] = { {X, O, X}  // First row.
							 , {O, O, X}  // Second row.
							 , {X, X, O}  // Third row.
	};

	srand(time(NULL)); // Salt the random-number generator once.

	// We'll generate random boards, and output the first few winning boards.
	const int MAX_WINNING_BOARDS = 10;
	int winningBoards = 0;
	int totalBoardsSeen = 0;
	while (winningBoards < MAX_WINNING_BOARDS)
	{
		int board[3][3]; // Get a fresh, empty board.
		randomlyInitBoard(board); // Randomly fill board with Xs and Os.
		if (isWinningBoard(board))
		{
			winningBoards++;
			cout << boardToString(board) << endl;
		}
		totalBoardsSeen++;
		if (totalBoardsSeen > 1000)
		{
			cout << "1000 boards generated.  Stopping now."
				<< "  Should have seen enough winning boards by now."
				<< "  Fix your code."
				<< endl;
			return 1;
		}
	}
}
