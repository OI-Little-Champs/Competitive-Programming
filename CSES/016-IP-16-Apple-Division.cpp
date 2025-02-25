#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;  cin>>n;
    vector<long long> arr(n);
    for(auto &x:arr)
        cin>>x;
    auto f = [&](int idx,  long long sum1, long long sum2, long long n, auto&& f) -> long long{
        if(idx == n){
            return abs(sum1-sum2);
        }
        long long choose = f(idx + 1, sum1 + arr[idx], sum2, n, f);
        long long notChoose = f(idx + 1, sum1, sum2 + arr[idx], n, f);
        return min(choose, notChoose);
    };
    cout<<f(0,  0 , 0 , n, f);
    return 0;
}