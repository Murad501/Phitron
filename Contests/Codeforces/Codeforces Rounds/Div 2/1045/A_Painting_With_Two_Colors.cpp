// 26/08/2025 20:37
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
    int n, a, b;
    cin >> n >> a >> b;
    int x = (n - a) + 1;
    int y = (n - b) + 1;

    bool ok = true;
    if (((n - a) & 1))
    {
        if (b < a)
        {
            no;
        }
        else if ((n - b) & 1)
        {
            no;
        }
        else
        {
            yes;
        }
    }
    else
    {
        if ((n - b) & 1)
        {
            no;
        }
        else
        {
            yes;
        }
    }
    // cout<<n<<" "<<a<<" "<<b<<nl;
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