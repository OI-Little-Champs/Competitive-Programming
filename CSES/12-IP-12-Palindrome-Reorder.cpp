#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string s;   cin>>s;
    vector<int> a(26);
    for(int i =0; i<s.size(); i++){
        a[s[i] - 'A']++;
    }
    int odds=0, oddi = -1;
    for(int i = 0; i<26; i++){
        if(a[i]%2){
           odds++;
           oddi = i;
        }
    }
    if(odds>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(int i = 0; i<26; i++){
        if(a[i]%2==0){
            int half = a[i]/2;
            a[i] -= half;
            while(half--)
                cout<<(char)('A' + i);
        }
    }
    if(oddi!=-1){
        while(a[oddi]--)
            cout<<(char)('A'+oddi);
    }
    for(int i = 25; i>=0; i--){
        while(a[i]>0){
            a[i]--;
            cout<<(char)('A'+i);
        }
    }
    return 0;
}