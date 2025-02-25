#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string st;  
    cin>>st; 
    vector<int> a;
    int b=1;
    for(int i=1; i < (int)st.size(); ++i){
        if(st[i] == st[i-1])  ++b;
        else{
            a.push_back(b);
            b=1;
        }
    }
    a.push_back(b);
    sort(a.rbegin(), a.rend());
    cout<<a[0];
    return 0;
}