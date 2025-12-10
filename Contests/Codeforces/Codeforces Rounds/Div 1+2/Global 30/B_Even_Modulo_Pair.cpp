// 06/11/2025 20:43
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int mn = min(n, 30LL);
    int x, y;
    bool ok = false;
    for (int i = 0; i < mn; i++)
    {
        for (int j = i + 1; j < mn; j++)
        {
            if ((v[j] % v[i]) % 2 == 0)
            {
                x = v[i], y = v[j];
                ok = true;
            }
        }
        if (ok)
        {
            break;
        }
 
    }
    if (ok)
    {
        cout << x << " " << y << nl;
    }
    else
    {
        minus;
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