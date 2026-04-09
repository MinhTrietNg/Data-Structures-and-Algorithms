// https://cses.fi/problemset/task/1620
// Created: Minh Triet
// Date: 09/04/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;


void solve()
{
    long long n, t;
    cin >> n >> t;

    vector<int> k(n);
    int Min = INT_MAX;

    for(auto &i : k)
    {
        cin >> i;
        Min = min(Min, i);
    }

    long long l = 0;
    long long r = Min * t; // Thời gian tối đa tìm = tất cả sản phẩm do máy có thời gian ngắn nhất làm
    long long ans = 0;


    while(l <= r)
    {
        long long mid = (l + r) / 2;
        long long sum = 0; // lưu lại tổng sản phẩm máy chạy trong "mid" giây

        for(int i = 0 ; i < n ; i ++)
        {
            sum += (mid / k[i]); // tính xem trong "mid" giây làm được bao nhiêu sản phẩm
            if(sum >= t)break; // nếu quá số lượng sản phẩm cần thì break;
        }

        if(sum >= t){ // nếu trong mid giây làm ra >= t sản phẩm cần ---> lưu lại kết quả + giảm số giây xem coi có thỏa không
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1; // nếu không đủ sản phẩm, tăng mid (thời gian chạy máy)
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
