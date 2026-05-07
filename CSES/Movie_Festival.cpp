// https://cses.fi/problemset/task/1629
// Created: Minh Triet
// Date: 

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define F first 
#define S second

const int N = 2e5 + 6;
int n;
pair<int,int> a[N];

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.S < b.S;
}


void solve()
{
    cin >> n;
    for(int i = 0 ; i < n ; i ++)
        cin >> a[i].F >> a[i].S;

    sort(a, a + n, cmp);

    int Cur = -1;
    int ans = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i].F >= Cur)
        {
            Cur = a[i].S;
            ans ++;
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}
