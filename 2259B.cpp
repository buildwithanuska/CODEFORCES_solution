#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int odd = 0;
        int divisibleBy4 = 0;
        int remainder2 = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 2 == 1)
                odd++;
            else if (x % 4 == 0)
                divisibleBy4++;
            else
                remainder2++;
        }

        cout << max(odd, max(divisibleBy4, remainder2)) << endl;
    }

    return 0;
}