// https://codeforces.com/contest/2200/problem/A
// Created: Minh Triet
// Date: 01/04/2026


#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pii pair<int,int>
#define F first
#define S second

void solve()
{
    int n, a;
    int d[20];
    memset(d, 0, sizeof(d));

    int ans = INT_MIN;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a;
        d[a] ++;
        ans = max(ans, a);
    }
    cout << d[ans] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //freopen("ANS.INP","r",stdin);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}