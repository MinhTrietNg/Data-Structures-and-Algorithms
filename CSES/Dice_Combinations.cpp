// https://cses.fi/problemset/task/1633
// Created: Minh Triet
// Date: 09/05/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

const int N = 2e6 + 5;
long long dp[N];
void solve()
{
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= 6 ; j ++)
            if(i - j >= 0)dp[i] += dp[i - j];
        
        dp[i] %= (int)1e9 + 7;
    }
        
    cout << dp[n];

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
