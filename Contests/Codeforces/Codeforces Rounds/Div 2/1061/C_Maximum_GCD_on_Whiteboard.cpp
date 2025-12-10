// 24/10/2025 20:50
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    map<int, int> mp;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
        ans = __gcd(ans, x);
    }

    sort(all(v));
    for (int i = 0; i < n; i++)
    {

        bool ok = true;
        int cnt = 0;
        int j = i + 1;

        while (j < n)
        {
            if (v[j] % v[i] != 0)
            {
                if (v[j] < v[i] * 4)
                {

                    cnt++;
                }
            }
            j++;
        }
        int cnt2 = mp[v[i]] - 1;
        if ((cnt)-cnt2 + i <= k)
        {
            ans = v[i];
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