#include <bits/stdc++.h>
using namespace std;
  
void solve_f() { 
    int n, k; 
    cin >> n >> k; 
    string s; 
    cin >> s; 
  
    int count_1 = 0; 
  
    for (int i = 0; i < n; i += k) { 
        bool all_1 = true; 
        for (int j = 0; j < k; j++) { 
            if (s[i + j] == '0') { 
                all_1 = false; 
                break; 
            } 
        } 
        if (all_1) { 
            count_1++; 
        } 
    } 
    cout << count_1 << "\n"; 
} 
  
int main() { 
    int t; 
    cin >> t; 
    while (t--) { 
        solve_f(); 
    } 
    return 0; 
}