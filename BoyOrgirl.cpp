
#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;

    int freq[26] = {0};
    int distinct = 0;

    for (int i = 0; i < username.size(); i++) {
        int index = username[i] - 'a';
        if (freq[index] == 0) {
            distinct++;
        }
        freq[index]++;
    }


    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
