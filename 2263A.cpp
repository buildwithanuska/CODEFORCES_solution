#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1) {
                ones++;
            }
        }

        int zeros = n - ones;

        if (ones >= zeros) {
            cout << "Bessie" << endl;
        } else {
            cout << "Elsie" << endl;
        }
    }

    return 0;
}