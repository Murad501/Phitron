// 08/10/2025 21:52
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
    int sum = LLONG_MAX;

    int ans = 0, i = 0;
    while (i < n)
    {
        if (i == 0)
        {
            ans += v[i];
        }
        else
        {
            ans += v[i];
            if (v[i - 1] == 0 || v[i - 2] == 0)
            {
                ans += v[i - 1] + v[i - 2];
            }
            else
            {
                ans += abs(v[i - 1] - v[i - 2]);
            }
        }
        i += 3;
    }

    int rem = (n - 1) % 3;
    if (rem == 1)
    {

        ans += v[n - 1];
    }
    else if (rem == 2)
    {
        if (v[n - 1] == 0 || v[n - 2] == 0)
        {
            ans += (v[n - 1] + v[n - 2]);
        }
        else
        {
            ans += abs(v[n - 1] - v[n - 2]);
        }
    }

    sum = min(sum, ans);

    i = 1;
    ans = 0;

    while (i < n)
    {
        if (i == 1)
        {
            ans += v[i];
            ans += v[i - 1];
        }
        else
        {
            ans += v[i];
            if (v[i - 1] == 0 || v[i - 2] == 0)
            {
                ans += v[i - 1] + v[i - 2];
            }
            else
            {
                ans += abs(v[i - 1] - v[i - 2]);
            }
        }
        i += 3;
    }

    rem = (n - 2) % 3;
    if (rem == 1)
    {
        ans += v[n - 1];
    }
    else if (rem == 2)
    {
        if (v[n - 1] == 0 || v[n - 2] == 0)
        {
            ans += v[n - 1] + v[n - 2];
        }
        else
        {
            ans += abs(v[n - 1] - v[n - 2]);
        }
    }
    sum = min(sum, ans);

    ans = 0;
    i = 2;

    while (i < n)
    {
        if (i == 2)
        {
            ans += v[i];
            if (v[0] == 0 || v[1] == 0)
            {
                ans += v[0] + v[1];
            }
            else
            {
                ans += abs(v[0] - v[1]);
            }
        }
        else
        {
            ans += v[i];
            if (v[i - 1] == 0 || v[i - 2] == 0)
            {
                ans += v[i - 1] + v[i - 2];
            }
            else
            {
                ans += abs(v[i - 1] - v[i - 2]);
            }
        }
        i += 3;
    }

    rem = (n) % 3;
    if (rem == 1)
    {

        ans += v[n - 1];
    }
    else if (rem == 2)
    {
        if (v[n - 1] == 0 || v[n - 2] == 0)
        {
            ans += v[n - 1] + v[n - 2];
        }
        else
        {
            ans += abs(v[n - 1] - v[n - 2]);
        }
    }
    cout << min(sum, ans) << nl;
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