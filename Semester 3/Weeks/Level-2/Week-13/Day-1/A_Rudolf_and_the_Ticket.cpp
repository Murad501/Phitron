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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(all(a));
    sort(all(b));
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > k)
        {
            break;
        }
        int target = k - a[i];
        int l = 0, r = m - 1, mid, idx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (b[mid] <= target)
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (idx != -1)
        {
            ans += idx + 1;
        }
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}