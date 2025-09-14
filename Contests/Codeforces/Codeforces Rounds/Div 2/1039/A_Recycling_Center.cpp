// 27/07/2025 20:37
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
    int n, c;
    cin >> n >> c;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= c)
        {
            v.push_back(x);
        }
    }

    int m = v.size();

    sort(v.rbegin(), v.rend());
    int curr = 1;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if ((v[i] * curr) <= c)
        {
            // cout<<v[i]<<" ";
            cnt++;
            curr *= 2;
        }
    }
    cout << n - cnt << nl;
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