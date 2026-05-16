<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int hour, minute;
        char colon;
        cin >> hour >> colon >> minute;
        int newHour;
        string period;
        if (hour == 0) {
            newHour = 12;
            period = "AM";
        }
        else if (hour < 12) {
            newHour = hour;
            period = "AM";
        }
        else if (hour == 12) {
            newHour = 12;
            period = "PM";
        }
        else {
            newHour = hour - 12;
            period = "PM";
        }
        if (newHour < 10) cout << "0";
        cout << newHour << ":";

        if (minute < 10) cout << "0";
        cout << minute << " " << period << endl;
    }
    return 0;
}
=======
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int hour, minute;
        char colon;
        cin >> hour >> colon >> minute;
        int newHour;
        string period;
        if (hour == 0) {
            newHour = 12;
            period = "AM";
        }
        else if (hour < 12) {
            newHour = hour;
            period = "AM";
        }
        else if (hour == 12) {
            newHour = 12;
            period = "PM";
        }
        else {
            newHour = hour - 12;
            period = "PM";
        }
        if (newHour < 10) cout << "0";
        cout << newHour << ":";

        if (minute < 10) cout << "0";
        cout << minute << " " << period << endl;
    }
    return 0;
}
>>>>>>> 652974fecab155fcc26a5b237e85b45e659c0845
