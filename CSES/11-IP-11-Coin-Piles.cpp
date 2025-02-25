#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long t;
    cin>>t;
    while(t--){
        long long a, b;   cin>>a>>b;
        if(a<b) swap(a, b);
        long long ans = 2*b-a;
        if(ans>=0&&ans%3==0){
            cout<<"YES"<<endl;
        }
        else    cout<<"NO"<<endl;
    }
    return 0;
}