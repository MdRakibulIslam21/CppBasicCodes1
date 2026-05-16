#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

void clearScreen() {
    system("cls");
}

void displayArray(int rows, int cols, int** array, const string& moveDirection) {
    clearScreen();

    if (!moveDirection.empty()) {
        cout << "Arrow Key Pressed: " << moveDirection << endl;
    } else {
        cout << "Use arrow keys to start moving!" << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == 0)
                cout << "   ";
            else
                cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int countSortedTiles(int rows, int cols, int** array) {
    int count = 0;
    int expected = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == expected ||
                (i == rows - 1 && j == cols - 1 && array[i][j] == 0)) {
                count++;
                expected++;
            } else {
                return count;
            }
        }
    }
    return count;
}

void manualSwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool moveBlank(int rows, int cols, int** array, int direction) {
    int blankRow, blankCol;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] == 0) {
                blankRow = i;
                blankCol = j;
            }
        }
    }

    if (direction == 72 && blankRow > 0) {  // A Up
        manualSwap(array[blankRow][blankCol], array[blankRow - 1][blankCol]);
        return true;
    }
    if (direction == 80 && blankRow < rows - 1) {  //A Down
        manualSwap(array[blankRow][blankCol], array[blankRow + 1][blankCol]);
        return true;
    }
    if (direction == 75 && blankCol > 0) {  // A Left
        manualSwap(array[blankRow][blankCol], array[blankRow][blankCol - 1]);
        return true;
    }
    if (direction == 77 && blankCol < cols - 1) {  // A Right
        manualSwap(array[blankRow][blankCol], array[blankRow][blankCol + 1]);
        return true;
    }

    return false;
}

int main() {
    int rows = 3, cols = 3;

    int** array = new int*[rows];
    for (int i = 0; i < rows; i++)
        array[i] = new int[cols];

    int initial[3][3] = { {0, 2, 3}, {1, 4, 5}, {6, 7, 8} };
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = initial[i][j];
        }
    }


    int sortedTiles = 0;
    int direction;
    string moveDirection = "";

    while (true) {
        displayArray(rows, cols, array, moveDirection);

        sortedTiles = countSortedTiles(rows, cols, array);

        cout << "Count: " << sortedTiles ;
        direction = _getch();
        if (direction == 0 || direction == 224) {
            direction = _getch();
            switch (direction) {
                case 72: moveDirection = "UP"; break;
                case 80: moveDirection = "DOWN"; break;
                case 75: moveDirection = "LEFT"; break;
                case 77: moveDirection = "RIGHT"; break;
                default: moveDirection = "UNKNOWN"; break;
            }

            if (!moveBlank(rows, cols, array, direction)) {
                cout << "Invalid move! Try again.\n";
            }
        }

        if (sortedTiles == rows * cols) {
            cout << "COMPLETED";
            break;
        }
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
