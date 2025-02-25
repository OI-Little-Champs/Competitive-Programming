#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;  
    cin>>n;
    vector<pair<long long, long long>> ans;
    auto f = [&](int n, int from, int to, int with, auto&& f) -> void{
        if(n==0)    return;
        f(n-1, from, with, to, f);
        ans.push_back(make_pair(from, to));
        f(n-1, with, to, from, f);
    };
    f(n, 1, 3, 2, f);
    cout<<ans.size()<<endl;
    for(auto x:ans) 
        cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}