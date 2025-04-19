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
    vector<ll> v;
    ll odd = 0, even = 0, maxVal = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        maxVal = max(maxVal, x);
        sum += x;
    }

    if (odd == 0 || even == 0)
    {
        cout << maxVal << nl;
    }
    else
    {
        sum -= (odd - 1);
        cout << sum << nl;
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