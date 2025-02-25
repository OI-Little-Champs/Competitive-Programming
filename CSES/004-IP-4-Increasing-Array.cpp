#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n;
    cin>>n;
    long long a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];
    long long cnt = 0;
    for(int i = 0; i<n-1; i++)
        if(a[i]>a[i+1]){
            int diff = abs(a[i]-a[i+1]);
            a[i+1]+=diff;
            cnt+=diff;
        }
    cout<<cnt<<endl;
    return 0;
}