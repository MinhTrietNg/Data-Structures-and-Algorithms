// https://cses.fi/problemset/task/1083
// Created: Minh Triet
// Date: 07/04/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

void solve()
{
    int n, a[N];
    cin >> n;
    for(int i = 1 ; i <= n - 1; i ++)
        cin >> a[i];

    sort(a, a + n);

    for(int i = 1 ; i <= n - 1; i ++)
        if(a[i] != i)
        { 
            cout << a[i] - 1;
            return;
        }
    cout << n;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
