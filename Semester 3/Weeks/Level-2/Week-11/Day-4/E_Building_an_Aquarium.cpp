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
    int n, x;
    cin >> n >> x;
    vector<int> v;
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        minVal = min(minVal, a);
    }
    auto ok = [&](int middle)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < middle)
            {
                sum += middle - v[i];
            }
        }
        return sum <= x;
    };

    ll l = 1, r = x + minVal, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {

            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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