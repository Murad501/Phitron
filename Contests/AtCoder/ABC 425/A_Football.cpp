// 27/09/2025 21:14
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define ll long long int
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define cyes cout << "Yes" << '\n'
#define cno cout << "No" << '\n'
#define minus cout << -1 << '\n'
#define zero cout << 0 << '\n'

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int mx = 1;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
         if(s[i] == s[i-1]){
            cnt++;
            mx = max(cnt, mx);
         }else{
            cnt = 1;
         }
    }
    if(mx >= 7){
        yes;
    }else{
        no;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}