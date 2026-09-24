#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 0) {
                zeros++;
            }
        }

        if (zeros < 2) {
            cout << -1 << endl;
        }
        else {
            int ans = a[0] + a[n - 1];
            cout << ans << endl;
        }
    }

    return 0;
}