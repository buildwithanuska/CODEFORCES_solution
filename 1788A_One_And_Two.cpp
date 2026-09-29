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
        int totalTwos = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] == 2) {
                totalTwos++;
            }
        }

        if (totalTwos % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        if (totalTwos == 0) {
            cout << 1 << endl;
            continue;
        }

        int need = totalTwos / 2;
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2) {
                count++;
            }

            if (count == need) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
