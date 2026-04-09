// https://cses.fi/problemset/task/1755
// Created: Minh Triet
// Date: 09/04/2026

//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;

#define F first 
#define S second 


void solve()
{
    string s;
    map <char,int> a;
    cin >> s;

    for(int i = 0 ; i < (int)s.length() ; i ++)
        a[s[i]] ++;


    int cnt_odd = 0;
    char mem;
    for(auto &i : a)
        if(i.S % 2 != 0)
        {
            cnt_odd ++;
            mem = i.F;
        }
        

    if(cnt_odd > 1)
    {
        cout << "NO SOLUTION";
        return;
    }
    

    string ans = "";
    for(auto &i : a)
        if(i.S % 2 == 0)
            for(int j = 0 ; j < i.S / 2; j ++)
            {
                cout << i.F;
                ans += i.F;
            }
    

    if(cnt_odd != 0)
    {
        for(int i = 0 ; i < a[mem] ; i ++)
            ans += mem;
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
}
