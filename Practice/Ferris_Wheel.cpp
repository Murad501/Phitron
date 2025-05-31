// 19/05/2025 01:02
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
    int n, w;
    cin >> n >> w;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    int ans = 0;
    int r = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (i > r)
        {
            break;
        }
        ans++;
        int val = v[i];
        int need = w - val;
        if (v[r] <= need)
        {
            r--;
        }
    }

    cout << ans << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}