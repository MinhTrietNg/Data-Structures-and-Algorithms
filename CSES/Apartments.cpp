// https://cses.fi/problemset/task/1084
// Created: Minh Triet
// Date: 07/05/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;


const int N = 2e5 + 6;
int a[N], b[N];

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 0 ; i < n ; i ++)
        cin >> a[i];

    for(int j = 0 ; j < m ; j ++)
        cin >> b[j];


    sort(a, a + n);
    sort(b, b + m);


    int i = 0, j = 0;
    int ans = 0;


    while(i < n && j < m)
    {
        if(abs(a[i] - b[j]) <= k)
        {
            ++ i;
            ++ j;
            ++ ans;
        }
        else {
            if(a[i] - b[j] > k) ++ j;
            else ++ i;
        }
    }

    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
