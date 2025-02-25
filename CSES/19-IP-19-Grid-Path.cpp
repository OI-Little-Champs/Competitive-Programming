#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
string s;
int visited[12][12], dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};

void f(int x, int y, int i) {
    if (x == 7 && y == 1) {
        if (i == n) ans++;
        return;
    }
    if (i == n) return;

    if ((visited[x][y - 1] && visited[x][y + 1]) &&
        (!visited[x - 1][y] && !visited[x + 1][y])) return;
    
    if ((visited[x - 1][y] && visited[x + 1][y]) &&
        (!visited[x][y - 1] && !visited[x][y + 1])) return;

    visited[x][y] = 1;

    if (s[i] == '?') {
        for (int j = 0; j < 4; ++j) {
            int px = x + dx[j], py = y + dy[j];
            if (!visited[px][py]) f(px, py, i + 1);
        }
    } else {
        int px = x, py = y;
        if (s[i] == 'L') py--;
        else if (s[i] == 'R') py++;
        else if (s[i] == 'U') px--;
        else px++;

        if (!visited[px][py]) f(px, py, i + 1);
    }

    visited[x][y] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    n = s.size();
    memset(visited, 0, sizeof visited);
    
    for (int i = 0; i < 10; i++) {
        visited[0][i] = visited[i][0] = visited[8][i] = visited[i][8] = 1;
    }

    f(1, 1, 0);
    cout << ans << endl;
    return 0;
}