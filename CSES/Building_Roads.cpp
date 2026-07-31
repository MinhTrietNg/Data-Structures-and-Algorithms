// https://cses.fi/problemset/task/1666
// Created: Minh Triet
// Date: 31/07/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent, rank;

    DSU(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for(int i = 0 ; i <= n ; i ++) parent[i] = i;
    }

    int find(int x)
    {
        if(parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y)
    {
        x = find(x);
        y = find(y);
        if(x == y) return;

        if(rank[x] < rank[y]) swap(x, y);
        parent[y] = x;
        if(rank[x] == rank[y]) rank[x] ++;
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;

    DSU dsu(n);

    for(int i = 0 ; i < m ; i ++)
    {
        int u, v;
        cin >> u >> v;
        dsu.unite(u, v);
    }

    vector<int> components; // tìm đại diện của mỗi thành phần
    for(int i = 1 ; i <= n ; i ++)
    {
        if(dsu.find(i) == i)
            components.push_back(i);
    }

    cout << components.size() - 1 << "\n"; // số cạnh cần thêm = (số thành phần - 1)

    // kết nối các thành phần lại với nhau
    for(int i = 1 ; i < (int)components.size() ; i ++)
    {
        cout << components[i - 1] << " " << components[i] << "\n";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
