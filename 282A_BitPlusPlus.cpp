#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, X;
    cin >> n;
    X = 0;
    for (i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if (s == "++X" || s == "X++") {
            X++;
        } else {
            X--;
        }
    }
    cout << X << endl;

    return 0;
}
