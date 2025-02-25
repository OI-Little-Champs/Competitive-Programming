#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;  
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    if(n==2||n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    int even = 2;
    while(even<=n){
        cout<<even<<" ";
        even+=2;
    }
    int odd = 1;
    while(odd<=n){
        cout<<odd<<" ";
        odd+=2;
    }
    cout<<endl;
    return 0;
}