#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    vector<long long> a, b;
    long long f = 1, l = n;
    if (n % 2 == 1)
    {
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        f = 4;
    }
    while (f < l)
    {
        if (f % 2 == 1)
        {
            a.push_back(f);
            a.push_back(l);
        }
        else
        {
            b.push_back(f);
            b.push_back(l);
        }
        f++;
        l--;
    }
    cout << a.size() << "\n";
    for (auto x : a)
        cout << x << " ";
    cout << b.size() << "\n";
    for (auto x : b)
        cout << x << " ";
    return 0;
}