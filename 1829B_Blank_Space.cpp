#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int current = 0;
        int maximum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0) {
                current++;
                maximum = max(maximum, current);
            }
            else {
                current = 0;
            }
        }

        cout << maximum << endl;
    }

    return 0;
}
