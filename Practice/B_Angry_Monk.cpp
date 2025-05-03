// 26/04/2025 19:45
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int maxVal = 0;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        maxVal = max(maxVal, x);
    }
    int cnt = 0, ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (cnt == 0 && maxVal == v[i])
        {
            cnt++;
        }
        else
        {
            ans += (v[i] + (v[i] - 1));
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