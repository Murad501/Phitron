// 30/10/2025 23:10
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }

    sort(all(v));
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << nl;
    int ans = 0;
    int l = 0, r = n - 1;
    vector<int> values;
    int total = 0, curr = 0;

    while (l <= r)
    {
        // cout<<(total + v[r]) <<" "<<v[r]<<" "<<curr<<nl;
        if ((total + v[r]) / x > curr)
        {
            curr = (total + v[r]) / x;
            total += v[r];
            values.push_back(v[r]);
            ans += v[r];
            r--;
        }
        else
        {
            values.push_back(v[l]);
            total += v[l];
            l++;
        }
    }
    cout << ans << nl;
    for (int i = 0; i < n; i++)
    {
         cout<<values[i]<<" ";
    }
    cout<<nl;

    // cout << nl;
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