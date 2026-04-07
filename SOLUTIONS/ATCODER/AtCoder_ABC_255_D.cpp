// https://atcoder.jp/contests/abc255/tasks/abc255_d
// Created: Minh Triet
// Date: 07/04/2026

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
        sort(a.begin(), a.end());
    
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + a[i];
    }
    while (q--) {
        long long x;
        cin >> x;
        
        // lower_bound trả về iterator trỏ đến phần tử đầu tiên >= x
        // idx chính là số lượng phần tử < x
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        
        // Tính chi phí cho nửa đầu (các số < x)
        long long cost_smaller = (long long)idx * x - pref[idx];
        
        // Tính chi phí cho nửa sau (các số >= x)
        // Số lượng phần tử ở nửa sau là (n - idx)
        // Tổng các phần tử ở nửa sau là (pref[n] - pref[idx])
        long long cost_larger = (pref[n] - pref[idx]) - (long long)(n - idx) * x;
        
        cout << cost_smaller + cost_larger << "\n";
    }
    
    return 0;
}