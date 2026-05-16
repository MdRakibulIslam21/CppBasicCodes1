<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int input;
    bool hard = false;

    for (int i = 0; i < n; i++) {
        cin >>input;
        if (input == 1) {
            hard = true;
        }
    }

    if (hard) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }

    return 0;
}

=======
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int input;
    bool hard = false;

    for (int i = 0; i < n; i++) {
        cin >>input;
        if (input == 1) {
            hard = true;
        }
    }

    if (hard) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }

    return 0;
}

>>>>>>> 652974fecab155fcc26a5b237e85b45e659c0845
