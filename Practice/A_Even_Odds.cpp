// 22/06/2025 18:36
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
    int n, k;
    cin >> n >> k;
    int odd = (n / 2);
    if (n & 1)
    {
        odd++;
    }
    if (k > odd)
    {
        k -= (n / 2);
        if (n & 1)
        {
            k--;
        }
        cout << (k * 2) << nl;
    }
    else
    {
        cout << (k * 2) - 1 << nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}