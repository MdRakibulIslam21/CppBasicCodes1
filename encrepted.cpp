#include <iostream>
#include <string>

using namespace std;

string encode(const string& s, int j) {
    string encoded = s;
    for (int i = j; i < s.length(); i += j + 1) {
        encoded[i] = encoded[i] + 2;
    }
    return encoded;
}

int main() {
    string s = "I am a student";
    int j = 2;

    string result = encode(s, j);
    cout << "Converted String: " << result << endl;

    return 0;
}
