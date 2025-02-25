#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    long long sum1 = 0, sum2 = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum1 += x;
    }
    cout << sum2 - sum1;
    return 0;
}