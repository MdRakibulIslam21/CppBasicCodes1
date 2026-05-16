#include <iostream>
using namespace std;

int main() {
    int mimo[10] = {32, 4, 5, 12, 5, 54, 6, 23, 3, 5}; // Declaration of a new array
    int n;
    cout << "Enter the number to be searched: " << endl;
    cin >> n; // Inputting the number to be searched in the array

    int i;
    for(i = 0; i < 10; i++) { // Searching begins
        if(n == mimo[i]) {
            cout << n << " was found in index " << i << " of the array." << endl; // Found the number
            break; // Searching ends
        }
    }

    if(i == 10) { // If we finished the loop without finding the number
        cout << n << " was not found in the array." << endl;
    }

    return 0;
}
