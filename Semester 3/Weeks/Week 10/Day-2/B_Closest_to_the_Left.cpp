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
    int n, k;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < k; i++)
    {
        int key, l = 0, r = n - 1, mid;
        cin >> key;
        int ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] <= key)
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}