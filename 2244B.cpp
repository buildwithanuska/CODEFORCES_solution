#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;

            sum += a;

            long long required = 1LL * i * (i + 1) / 2;

            if (sum < required) {
                ok = false;
            }
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}