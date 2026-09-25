#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int countOnes = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            countOnes++;
        }
    }

    int elsieTurns = (n - 1) / 2;

    if (countOnes > elsieTurns) {
        cout << "Bessie\n";
    }
    else {
        cout << "Elsie\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}