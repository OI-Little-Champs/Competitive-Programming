#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n, cnt = 0;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cnt = 0;
        cnt = (((i*i)*(i*i-1))/2) - (4*(i-1)*(i-2));
        cout<<cnt<<endl;
    }
    return 0;
}