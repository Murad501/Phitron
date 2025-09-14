// 13/09/2025 19:48
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
    vector<int> v;
    vector<int> candidates;
    vector<int> bts(32);
    vector<bitset<32>> bits;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        bits.push_back(x);
        candidates.push_back(i);
        cout<<bits[i]<<nl;
    }

    for (int j = 31; j >= 0; j--)
    {
        vector<int> a, b;
        int m = candidates.size();
        for (int i = 0; i < m; i++)
        {
            if (bits[candidates[i]].test(j))
            {
                a.push_back(candidates[i]);
            }
            else
            {
                b.push_back(candidates[i]);
            }
        }
        // cout << a.size() << " " << b.size() << " " << m << nl;
        if (a.size() == m || (a.size() && a.size() < b.size()))
        {
            candidates = a;
        }
        else if (b.size() == m || (b.size() && b.size() < a.size()))
        {
            candidates = b;
        }

        // cout<<candidates[0]<<" "<<candidates.size()<<nl;
    }

    int idx = candidates[0];
    cout << idx<<" "<<candidates.size() << nl;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v[i] ^ v[idx]);
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