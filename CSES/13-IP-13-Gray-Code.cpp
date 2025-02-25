#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin >> n;
    long long p = 1 << n;
    vector<string> sol;
    for (int i = 0; i < p; i++) {
        long long gray = i ^ (i >> 1);
        string binary = bitset<16>(gray).to_string();
        sol.push_back(binary.substr(16 - n)); 
    }
    for (auto &x : sol) {
        cout << x << endl;
    }
    return 0;
}