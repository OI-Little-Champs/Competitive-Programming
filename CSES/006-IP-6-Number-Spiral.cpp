#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    cin>>t;
    while(t--){
        long long i, j;   cin>>i>>j;
        if(i>=j){
            if(i%2==0)  cout<<(i-1)*(i-1)+(i-j)+i<<endl;
            else cout<<(i-1)*(i-1)+j<<endl;
            continue;
        }
        if(j%2==0){
            cout<<(j-1)*(j-1)+i<<endl;
            continue;
        }
        cout<<(j-1)*(j-1)+j+(j-i)<<endl;
    }
    return 0;
}