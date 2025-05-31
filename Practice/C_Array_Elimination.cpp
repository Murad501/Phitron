// 21/05/2025 00:53
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
    vector<int> a(32, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        bitset<32> b(x);
        cout<<b<<nl;
        // cout << b << nl;
        for (int j = 0; j < 32; j++)
        {
            if (b[j])
            {
                a[j]++;
            }
        }
    }

    

    for (int i = 0; i < n; i++)
    {
        bool ok = true;
        for (int j = 0; j < 32; j++)
        {
            if ((a[j] % (i + 1)) != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << i + 1 << " ";
        }
    }
    cout << nl;

    // cout << ans << nl;
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