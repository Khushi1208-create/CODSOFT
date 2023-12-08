/*Build a simple console-based Tic-Tac-Toe game that
allows two players to play against each other
TASK 3
TIC-TAC-TOE GAME
Game Board: Create a 3x3 grid as the game board.
Players: Assign
"X"
and "O" to two players.
Display Board: Show the current state of the board.
Player Input: Prompt the current player to enter their move.
Update Board: Update the game board with the player
'
s move.
Check for Win: Check if the current player has won.
Check for Draw: Determine if the game is a draw.
Switch Players: Alternate turns between
"X"
and "O"
players.
Display Result: Show the result of the game (win, draw, or ongoing).
Play Again: Ask if the players want to play another game*/
#include <iostream>
#include <vector>

using namespace std;

// Function to display board
void displayBoard(const vector<vector<char>>& board) {
    cout << "-------------" << endl;
    for (const auto& row : board) {
        cout << "| ";
        for (char cell : row) {
            cout << cell << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the game is a draw
bool checkDraw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false; // If there is an empty space, the game is not a draw
            }
        }
    }
    return true; // All cells are filled, and no player has won
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize an empty 3x3 board
    char currentPlayer = 'X';

    do {
        displayBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check if the chosen cell is valid and not already occupied
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') {
            board[row - 1][col - 1] = currentPlayer;

            // Check for win
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                break;
            }

            // Check for draw
            if (checkDraw(board)) {
                displayBoard(board);
                cout << "The game is a draw!" << endl;
                break;
            }

            // Switch players
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move. Please try again." << endl;
        }

    } while (true);

    return 0;
}

