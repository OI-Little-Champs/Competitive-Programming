#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;   
    cin>>s;
    sort(s.begin(), s.end());
    vector<string> a;
    a.push_back(s);
    while(next_permutation(s.begin(), s.end()))
        a.push_back(s);
    cout<<a.size()<<"\n";
    for(auto x:a)   
        cout<<x<<"\n";
    return 0;
}