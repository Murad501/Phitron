// 26/08/2025 20:56
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

int mx = INT_MIN;

bool isP(int x)
{
    if (x <= 3)
    {
        return true;
    }
    else
    {
        bool ok = true;
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                mx = i;
                ok = false;
                break;
            }
        }
        return ok;
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    if (k & 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] & 1)
            {
                v[i] += k;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    else
    {

        int gcd = -1;
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            while (isP(v[i]))
            {
                v[i] += k;
                ok = true;
            }
            if (ok)
            {
                if (gcd == -1)
                {
                    gcd = v[i];
                }
                else
                {

                    gcd = __gcd(v[i], gcd);
                }
            }
        }
        cout << gcd << nl;

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
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