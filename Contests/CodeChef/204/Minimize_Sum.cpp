// 17/09/2025 23:28
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
    int n, m;
    cin >> n >> m;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    vector<int> prefix;
    prefix.push_back(0);
    for (int i = 0; i < n; i++)
    {

        prefix.push_back(v[i] + prefix[i]);
    }

    int ans = INT_MAX;

    int diff = m - v[0];
    int sum = prefix[0];

    for (int j = 1; j < n; j++)
    {
        int val = v[j] + diff;
        sum += (val % m);
    }
    ans = min(ans, sum);

    int prev = v[0], next = sum;
    for (int i = 1; i < n; i++)
    {
         int df = v[i] - prev;
        next-=



         prev = v[i];
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