// 23/07/2025 08:23
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
    int n, r;
    cin >> n >> r;
    vector<int> v;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        int x = v[i];

        if (x % 2 == 0)
        {
            ans += x;
            r -= (x / 2);
        }
        else
        {
            ans += (x - 1);
            r -= (x - 1) / 2;
            cnt++;
        }
    }

    if(cnt <=r){
        ans+=cnt;
    }else{
        ans+=r;
        ans-=(cnt-r);
        
    }

    // cout << r << cnt << nl;

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