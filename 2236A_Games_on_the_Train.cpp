#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int mn = 7;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;

            mn = min(mn, h);
            mx = max(mx, h);
        }

        cout << mx - mn + 1 << endl;
    }

    return 0;
}
