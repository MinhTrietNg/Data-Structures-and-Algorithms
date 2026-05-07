// https://cses.fi/problemset/task/1074
// Created: Minh Triet
// Date: 07/05/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 6;
int n, a[N];

set<int> s;
void solve()
{
    cin >> n;

    int Max_Val = INT_MIN, Min_Val = INT_MAX;
    for(int i = 1 ; i <= n ; i ++)
        cin >> a[i];
    sort(a + 1, a + n + 1);

    int med = a[n % 2 == 0 ? n / 2 : n / 2 + 1];
    int ans = 0;
    
    for(int i = 1 ; i <= n ; i ++)
        ans += abs(med - a[i]);

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
