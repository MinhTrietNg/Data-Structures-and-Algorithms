// https://cses.fi/problemset/task/1192
// Created: Minh Triet
// Date: 31/07/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void bfs(int sx, int sy)
{
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while(!q.empty())
    {
        auto [x, y] = q.front(); q.pop();

        for(int d = 0 ; d < 4 ; d ++)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(visited[nx][ny] || grid[nx][ny] == '#') continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

void solve()
{
    cin >> n >> m;
    grid.resize(n);
    for(auto &row : grid) cin >> row;

    visited.assign(n, vector<bool>(m, false));

    int rooms = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < m ; j ++)
        {
            if(grid[i][j] == '.' && !visited[i][j])
            {
                rooms ++;
                bfs(i, j);
            }
        }
    }

    cout << rooms << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
