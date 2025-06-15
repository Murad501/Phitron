// 12/06/2025 21:27
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
    cout << (n * 2) - 1 << nl;
    cout << 1 << " " << 1 << " " << n << nl;
    for (int i = 2; i <= n; i++)
    {
        cout << i << " " << 1 << " " << (n - i) + 1 << nl;
        cout << i << " " << (n - i) + 2 << " " << n << nl;

    }
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