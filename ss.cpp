#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

void printBoard(int** board, int size, int count) {
    system("CLS"); // Clear the console screen
    cout << "Use Arrow Keys to move" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (board[i][j] == 0) {
                cout << "  ";
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << "Count: " << count << endl;
}

bool isSolved(int** board, int size) {
    int value = 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size - 1 && j == size - 1) return true;
            if (board[i][j] != value++) return false;
        }
    }
    return true;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void moveTile(int** board, int size, int &x, int &y, char move) {
    switch (move) {
        case 'w': // up
            if (x > 0) {
                swap(board[x][y], board[x - 1][y]);
                x--;
            }
            break;
        case 's': // down
            if (x < size - 1) {
                swap(board[x][y], board[x + 1][y]);
                x++;
            }
            break;
        case 'a': // left
            if (y > 0) {
                swap(board[x][y], board[x][y - 1]);
                y--;
            }
            break;
        case 'd': // right
            if (y < size - 1) {
                swap(board[x][y], board[x][y + 1]);
                y++;
            }
            break;
    }
}

int main() {
    const int size = 3; // Size of the board (3x3)
    int** board = new int*[size];
    for (int i = 0; i < size; i++) {
        board[i] = new int[size];
    }

    // Initialize the board
    int value = 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size - 1 && j == size - 1) {
                board[i][j] = 0;
            } else {
                board[i][j] = value++;
            }
        }
    }

    int x = size - 1, y = size - 1; // Position of the empty space
    int count = 0;
    printBoard(board, size, count);

    while (!isSolved(board, size)) {
        char move = _getch(); // Get user input
        if (move == 27) break; // Exit if ESC is pressed
        moveTile(board, size, x, y, move);
        count++;
        printBoard(board, size, count);
    }

    cout << "Congratulations! You solved the puzzle in " << count << " moves." << endl;

    // Clean up dynamic memory
    for (int i = 0; i < size; i++) {
        delete[] board[i];
    }
    delete[] board;

    return 0;
}
