// https://cses.fi/problemset/task/1068/
// Created: Minh Triet
// Date: 03/04/2026

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    cout << n << " ";
    while(n != 1)
    {
        if(n % 2 == 0)n /= 2;
        else n = n * 3 + 1;
        cout << n << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
