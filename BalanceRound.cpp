#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());


        int best = 1, current = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                current++;
            } else {
                best = max(best, current);
                current = 1;
            }
        }

        best = max(best, current);
        int answer = n - best;
        cout << answer << endl;
    }

    return 0;
}

