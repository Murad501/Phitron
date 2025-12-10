// 19/10/2025 21:29
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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int ans = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        if (i % 2 == 0)
        {
            if (i == 0)
            {
                v[i+1] = max(v[i+1], mx);
                if (v[i] >= v[i + 1])
                {
                    int dif = v[i] - v[i + 1];
                    dif++;
                    ans += dif;
                }
            }
            else
            {
                if (v[i] >= v[i - 1])
                {
                    v[i] = min(v[i], mx);
                    if (v[i] >= v[i - 1])
                    {
                        int dif = v[i] - v[i - 1];
                        dif++;
                        ans += dif;
                        v[i] -= dif;
                    }
                }
                if (i < n - 1)
                {
                    v[i+1] = max(v[i+1], mx);
                    v[i] = min(v[i], mx);
                    if (v[i] >= v[i + 1])
                    {
                        int dif = v[i] - v[i + 1];
                        dif++;
                        ans += dif;
                        v[i] -= dif;
                    }
                }
            }
            // cout<<i<<" "<< ans<<nl;
        }
        else
        {
            v[i] = max(v[i], mx);
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