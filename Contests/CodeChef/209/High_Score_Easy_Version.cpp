// 22/10/2025 21:17
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
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    map<int, int> mpA, mpB;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        mpA[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
        mpB[x]++;
    }

    int ans = 0;
    int notPossible = 0;

    for (auto [key, value] : mpA)
    {
        int cnt = mpB[key];
        if (value > n / 2)
        {
            if (cnt >= n / 2)
            {
                int pos = max(n - value, n - cnt);
                ans += (pos * key);
                int extra = value - pos;
                mpB[key] -= extra;
                int cnt2 = cnt - extra;
                // cout<<ans<<nl;
                int mn = min(pos, cnt2);
                ans += (key * mn);
                mpB[key] = 0;
            }
            else
            {
                ans += (value * key);
                ans += (key * mpB[key]);
                mpB[key] = 0;
            }
        }
        else
        {

            if (cnt > n / 2)
            {
                int pos = max(n - value, n - cnt);
                ans += (pos * key);
                int extra = cnt - pos;
                
                int cnt2 = value - extra;
                // cout<<ans<<nl;
                int mn = min(pos, cnt2);
                ans += (key * mn);
                mpB[key] = 0;
            }
            else
            {
                ans += (value * key);
                ans += (key * mpB[key]);
                mpB[key] = 0;
            }
        }
    }
    for (auto [key, value] : mpB)
    {
        if (value > 0)
        {

            ans += (key * value);
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