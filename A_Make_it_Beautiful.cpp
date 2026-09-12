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

        // If all elements are equal, it is impossible
        if (a[0] == a[n - 1]) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";

            // Put the maximum element first
            cout << a[n - 1] << " ";

            // Print the remaining elements
            for (int i = 0; i < n - 1; i++) {
                cout << a[i] << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}
