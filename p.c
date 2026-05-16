#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <conio.h> // For _getch()
using namespace std;

const int SIZE = 3;

// Print the board with the counter below, compactly
void printBoard(int board[SIZE][SIZE], int moves) {
    system("cls"); // Clear the screen
    cout << "Use Arrow Key\n"; // Single-line instruction

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0)
                cout << setw(3) << " ";
            else
                cout << setw(3) << board[i][j];
        }
        cout << endl;
    }

    cout << "Count: " << moves << endl; // Display the counter right below the grid
}

// Check if the puzzle is solved
bool isSolved(int board[SIZE][SIZE]) {
    int correct = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == SIZE - 1 && j == SIZE - 1)
                return board[i][j] == 0; // Last cell is empty
            if (board[i][j] != correct++)
                return false;
        }
    }
    return true;
}

// Shuffle the board
void shuffleBoard(int board[SIZE][SIZE]) {
    srand(time(0));
    for (int i = 0; i < 100; i++) {
        int r1 = rand() % SIZE, c1 = rand() % SIZE;
        int r2 = rand() % SIZE, c2 = rand() % SIZE;
        swap(board[r1][c1], board[r2][c2]);
    }
}

// Move the empty space based on arrow key input
bool moveTile(int board[SIZE][SIZE], int key) {
    int emptyRow, emptyCol;

    // Find the position of the empty space
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                emptyRow = i;
                emptyCol = j;
                break;
            }
        }
    }

    // Process arrow key input
    int newRow = emptyRow, newCol = emptyCol;
    if (key == 72) newRow--; // Up arrow
    else if (key == 80) newRow++; // Down arrow
    else if (key == 75) newCol--; // Left arrow
    else if (key == 77) newCol++; // Right arrow

    // Check if the move is valid
    if (newRow >= 0 && newRow < SIZE && newCol >= 0 && newCol < SIZE) {
        swap(board[emptyRow][emptyCol], board[newRow][newCol]);
        return true;
    }
    return false;
}

int main() {
    int board[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0} // 0 represents the empty space
    };

    shuffleBoard(board);

    int moves = 0; // Counter for the number of moves

    while (true) {
        printBoard(board, moves);

        if (isSolved(board)) {
            cout << "\nCongratulations! You solved the puzzle in " << moves << " moves!" << endl;
            break;
        }

        int key = _getch(); // Get keyboard input

        // If it's a special key (like arrow keys), _getch() must be called twice
        if (key == 224) {
            key = _getch();
            if (moveTile(board, key)) {
                moves++; // Increment the move counter for each valid move
            }
        } else if (key == 'q' || key == 'Q') {
            cout << "\nThanks for playing! You made " << moves << " moves." << endl;
            break;
        }
    }

    return 0;
}
