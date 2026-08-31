#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int stairs = abs(a - b) * e;
    int elevator = c + abs(a - b) * f + d;

    if (stairs <= elevator)
        cout << "STAIRS" << endl;
    else
        cout << "ELEVATOR" << endl;

    return 0;
}
