#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    //   1 2 3 4 5 6 7 8
    // 1 . . . . . . . .
    // 2 . . . . . . . .
    // 3 . . . . . . . .
    // 4 . . . . . . . .
    // 5 . . . . . . . .
    // 6 . . . . . . . .
    // 7 . . . . . . . .
    // 8 . . . . . . . .
    bool board[9][9];
    bool row[9];
    bool downright[15];
    bool upright[15];
    int ans = 0;
    memset(board, 0, sizeof(board));
    memset(row, 0, sizeof(row));
    memset(downright, 0, sizeof(downright));
    memset(upright, 0, sizeof(upright));
    for(int i =1; i<=8; i++){
        row[i] = false;
        for(int j = 1; j<=8; j++){
            char c; cin>>c;
            if(c=='*')  board[i][j]=true;
            else    board[i][j]=false;
        }
    }
    auto f = [&](int x, auto&& f) -> void{
        if(x==9){
            ans++;
            return;
        }
        for(int i =1; i<=8; i++){
            if(!board[i][x]&&!row[i]){
                if(!downright[x-i+7]&&!upright[x+i-2]){
                    row[i] = downright[x-i+7] = upright[x+i-2] = true;
                    f(x+1, f); 
                    row[i] = downright[x-i+7] = upright[x+i-2] = false;
                }
            }
        }
    };
    f(1, f);
    cout<<ans<<endl;
    return 0;
}