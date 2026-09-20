#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        bool possible = true;

        // If there are duplicate values, the second occurrence
        // will always be blocked.
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << -1 << endl;
        } else {
            // With all distinct positive values, decreasing order works.
            reverse(a.begin(), a.end());

            for (int x : a) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
