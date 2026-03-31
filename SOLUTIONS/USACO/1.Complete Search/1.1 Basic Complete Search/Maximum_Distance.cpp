// https://codeforces.com/gym/102951/problem/A
// Created: Minh Triet
// Date: 28/03/2026

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;

    vector<int> x(n);
    for(int &i: x)cin >> i;
    
    vector<int> y(n);
    for(int &i : y)cin >> i;

    int ans = INT_MIN;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = i + 1 ; j < n ; j ++)
        {
            int cal = (x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]);
            ans = max(ans, cal);
        }
    }

    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    solve();
    return 0;
}