#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    int n, k, q;
    cin >> n >> k >> q;
    map<int, int> mp;
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
        mx = max(mx, r);
        mn = min(mn, l);
    }

    int sum = 0;
    vector<int> v(mx + 2, 0);
    for (auto [key, value] : mp)
    {
        sum += value;
        auto next = mp.upper_bound(key);
        if (sum >= k && next != mp.end())
        {
            for (int i = key; i < next->first; i++)
            {
                v[i] = sum;
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        for (int i = max(a, mn); i <= min(b, mx); i++)
        {
            if (v[i] >= k)
            {
                cnt++;
            }
        }
        cout << cnt << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}