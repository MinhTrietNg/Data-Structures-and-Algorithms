// https://cses.fi/problemset/task/1621
// Created: Minh Triet
// Date: 17/04/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 6;
set<int> s;
void solve()
{
    int n, a[N];

    cin >> n;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
