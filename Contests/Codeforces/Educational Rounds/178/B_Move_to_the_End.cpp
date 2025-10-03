// 28/04/2025 20:40
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
    vector<int> v, preSum;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int maxVal = v[0];
    vector<int> t;
    t.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        int mx = max(v[i], t[i - 1]);
        t.push_back(mx);
    }
    reverse(all(v));
    reverse(all(t));
    preSum.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        preSum.push_back(preSum[i - 1] + v[i]);
    }

    for (int i = 0; i < n; i++)
    {

        int val = (preSum[i] - v[i]) + t[i];
        cout << val << " ";
    }
    cout << nl;
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