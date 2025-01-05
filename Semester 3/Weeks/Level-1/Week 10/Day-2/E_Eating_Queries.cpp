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
    int n, q;
    cin >> n >> q;
    vector<ll> v, preSum;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<ll>());
    preSum.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        preSum.push_back(preSum[i - 1] + v[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int key, l = 0, r = n - 1, mid;
        cin >> key;
        int ans = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (preSum[mid] >= key)
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << nl;
    }
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