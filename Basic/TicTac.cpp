#include <iostream>
using namespace std;

void printBoard(char board[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool checkWinner(char board[3][3], char player) 
{
    // Check rows and columns
    for (int i = 0; i < 3; ++i) 
	{
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
		{
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
		{
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
	{
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
	{
        return true;
    }

    return false;
}

bool isBoardFull(char board[3][3]) 
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) 
		{
            if (board[i][j] == '*') 
			{
                return false;
            }
        }
    }
    return true;
}

int main() 
{
	cout << "Muhammad Usman\n@Usman4Byte\n\n";
	
    char board[3][3] = {{'*', '*', '*'},
                       {'*', '*', '*'},
                       {'*', '*', '*'}};

    int playerTurn = 1;

    while (true) 
	{
        printBoard(board);

        if (playerTurn == 1) 
		{
            cout << "Player 1's turn (X)" << endl;
        } 
		else 
		{
            cout << "Player 2's turn (O)" << endl;
        }

        int row, col;
        cout << "Enter row number (0, 1, or 2): ";
        cin >> row;
        cout << "Enter column number (0, 1, or 2): ";
        cin >> col;

        if (board[row][col] == '*') 
		{
            if (playerTurn == 1) 
			{
                board[row][col] = 'X';
                if (checkWinner(board, 'X')) 
				{
                    printBoard(board);
                    cout << "Player 1 wins!" << endl;
                    break;
                }
            } 
			else 
			{
                board[row][col] = 'O';
                if (checkWinner(board, 'O')) 
				{
                    printBoard(board);
                    cout << "Player 2 wins!" << endl;
                    break;
                }
            }

            if (isBoardFull(board)) 
			{
                printBoard(board);
                cout << "It's a tie!" << endl;
                break;
            }

            playerTurn = 3 - playerTurn;  // Switch player
        } 
		else 
		{
            cout << "Cell already occupied. Try again." << endl;
        }
    }

    return 0;
}

