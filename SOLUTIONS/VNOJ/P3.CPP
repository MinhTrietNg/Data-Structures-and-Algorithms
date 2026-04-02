// https://oj.vnoi.info/problem/hp_thpt_22_b
// Created: Minh Triet
// Date: 03/04/2026


#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

bool cmp_str(string a, string b) {
    return (a + b) > (b + a);
}

void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), cmp_str);

    string ans = "";
    for (string s : a) {
        ans += s;
    }

    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
