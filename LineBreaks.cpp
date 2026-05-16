#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int totalLen = 0;
        int count = 0;
        bool stopped = false;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            int len = s.length();

            if (!stopped && totalLen + len <= m) {
                totalLen += len;
                count++;
            } else {
                stopped = true;
            }
        }

        cout << count << endl;
    }
    return 0;
}
