#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n, mod = 1e9 + 7;;  
    cin>>n;
    auto f = [&](long long base, long long exp, auto &&f) -> long long {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    };
    cout<<f(2, n, f)<<endl;
    return 0;
}