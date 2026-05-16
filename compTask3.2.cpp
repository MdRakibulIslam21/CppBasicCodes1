#include <iostream>
#include <string>

using namespace std;

bool isAssignmentValid(string s) {
    int eqPos = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '=') {
            if (eqPos != -1) return false;
            eqPos = i;
        }
    }

    if (eqPos == -1) return false;

    for (int i = 0; i < eqPos; i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') return false;
    }

    int opCount = 0;
    for (int i = eqPos + 1; i < s.length(); i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            opCount++;
        }
    }

    return opCount <= 2;
}

bool isUnaryValid(string s) {
    int n = s.length();
    if (n < 3) return false;

    bool prefix = (s[0] == '+' && s[1] == '+') || (s[0] == '-' && s[1] == '-');
    bool postfix = (s[n - 1] == '+' && s[n - 2] == '+') || (s[n - 1] == '-' && s[n - 2] == '-');

    if (prefix && !postfix) {
        return (s[2] != '+' && s[2] != '-');
    }
    if (postfix && !prefix) {
        return (s[n - 3] != '+' && s[n - 3] != '-');
    }

    return false;
}

int main() {
    string input;
    cout << "Enter expression: ";
    getline(cin, input);

    if (input.find('=') != string::npos) {
        if (isAssignmentValid(input)) cout << "Valid Assignment" << endl;
        else cout << "Invalid Assignment" << endl;
    } else {
        if (isUnaryValid(input)) cout << "Valid Unary" << endl;
        else cout << "Invalid Unary" << endl;
    }

    return 0;
}
