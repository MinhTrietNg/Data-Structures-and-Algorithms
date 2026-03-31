// https://oj.vnoi.info/problem/bedao_m22_b
// Created: Minh Triet
// Date: 31/03/2026

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 7;
int n, ans = 0;
int a[N], d[N];
void solve()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i ++)
    {
        cin >> a[i];
        if(i >= 7)
            d[a[i - 6] % 23] ++;
        ans += d[a[i] % 23];
    }
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
