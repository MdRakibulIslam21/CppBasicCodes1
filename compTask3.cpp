#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter the expression: ";
    getline(cin, s);

    int length = s.length();
    int trace = -1;
    int equalCount = 0;

    for (int i = 0; i < length; i++) {
        if (s[i] == '=') {
            trace = i;
            equalCount++;
        }
    }

    if (equalCount != 1) {
        cout << "Invalid Expression" << endl;
        return 0;
    }

    bool opOnLeft = false;
    for (int i = 0; i < trace; i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            opOnLeft = true;
        }
    }

    int opOnRight = 0;
    bool stuckVariables = false;
    for (int i = trace + 1; i < length; i++) {
        if (s[i] == ' ') continue;

        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            opOnRight++;
        } else if (isalnum(s[i])) {
            int next = i + 1;
            while (next < length && s[next] == ' ') next++;
            if (next < length && isalnum(s[next])) {
                stuckVariables = true;
            }
        }
    }



    if (!opOnLeft && opOnRight <= 2 && !stuckVariables) {
        cout << "Valid Expression" << endl;
    } else {
        cout << "Invalid Expression" << endl;
    }

    return 0;
}
