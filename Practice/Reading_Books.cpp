// 25/05/2025 17:31
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
    int mx = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }
    int available = sum - mx;
    if (available < mx)
    {
        cout << mx * 2 << nl;
    }
    else
    {
        cout << sum << nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}