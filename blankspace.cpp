#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int spacelen = 0, Count = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                Count++;
                spacelen = max(spacelen, Count);
            } else {
                Count = 0;
            }
        }
        cout << spacelen << endl;
    }
}
