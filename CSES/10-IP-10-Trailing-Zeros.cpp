#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin>>n;
    long long ans = 0, p = 5;
    while(p<=n){
        ans+=n/p;
        p*=5;
    }
    cout<<ans<<endl;
    return 0;
}