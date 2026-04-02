// https://oj.vnoi.info/problem/hp_thpt_22_a
// Created: Minh Triet
// Date: 31/03/2026

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    string target = "virus";
    int n = s.length();
    int m = target.length();
    if(n < m)
    {
        cout << 0;
        return;
    }

    int ans = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(s[i] == 'v' && s.substr(i, m) == target)
            ans ++;
    }

    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();


}