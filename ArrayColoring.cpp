<<<<<<< HEAD

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        if (sum % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
=======

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
        }
        if (sum % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
>>>>>>> 652974fecab155fcc26a5b237e85b45e659c0845
