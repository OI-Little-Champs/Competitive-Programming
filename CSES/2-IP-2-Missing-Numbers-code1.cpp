#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long long n; 
    cin>>n;
    set<long long> a;
    long long temp=0;
    for(long long i=0; i<n; i++){
        cin>>temp;
        a.insert(temp);
    }
    temp=1;
    int p=1;
    for(auto& i:a){
        if(i!=temp){
            p=0;
            cout<<temp;
            break;
        }
        temp++;
    }
    if(p)
        cout<<temp;
    return 0;
}