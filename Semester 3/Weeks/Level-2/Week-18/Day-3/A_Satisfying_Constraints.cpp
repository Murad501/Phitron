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
    int n;
    cin >> n;
    int mx = INT_MIN, mn = INT_MAX;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            mx = max(mx, x);
        }
        else if (a == 2)
        {
            mn = min(mn, x);
        }
        else
        {
            v.push_back(x);
        }
    }

    sort(all(v));
    int ans = 0;
    if (mx <= mn)
    {
        ans = (mn - mx) + 1;
        for (int i = 0; i < v.size(); i++)
        {

            if (v[i] >= mx && v[i] <= mn)
            {
                ans--;
            }
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