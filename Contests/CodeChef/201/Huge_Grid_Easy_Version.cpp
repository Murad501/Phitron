// 27/08/2025 21:03
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
    int n;
    cin >> n;
    string s;
    cin >> s;


    vector<int> v;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1'){
            ans++;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //      cout<<v[i]<<" ";
    // }
    // cout<<nl;

    for (int i = 0; i < n - 1; i++)
    {
         if(s[i] == '1'){
            ans++;
         }
         if(s[i+1] == '1'){
            ans++;
         }
    }

    
    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}