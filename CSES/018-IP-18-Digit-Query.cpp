#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n <= 9) {
            cout << n << endl;
            continue;
        }

        vector<long long> v = {9};
        long long x = 0, c = 1;

        while (x < 1e18) {
            x = v.back() + (9LL * powl(10, c) * (c + 1));
            c++;
            v.push_back(x);
        }

        int sz = lower_bound(v.begin(), v.end(), n) - v.begin() + 1;
        n -= v[sz - 2];

        string s;
        while (s.size() != sz) {
            long long l = s.size();
            x = sz * powl(10, sz - l - 1);

            long long y = 0, xx = x;
            for (int i = (s.empty() ? 1 : 0); i <= 9; i++) {
                if (xx >= n) {
                    y = i;
                    n -= (xx - x);
                    break;
                }
                xx += x;
            }
            s += (y + '0');
        }

        cout << s[n - 1] << endl;
    }
    return 0;
}