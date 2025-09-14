// 05/08/2025 10:30
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sum = accumulate(v.begin(), v.end(), 0);
    int val = sum % 3;
    if (val == 0)
    {
        zero;
    }
    else if (val == 2)
    {
        cout << 1 << nl;
    }
    else
    {
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 3 == 1)
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 2 << nl;
        }
    }
    // cout<<sum<<nl;
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