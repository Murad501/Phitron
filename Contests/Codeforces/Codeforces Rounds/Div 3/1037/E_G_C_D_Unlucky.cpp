// 17/07/2025 21:35
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

int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a, b, ans;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
        ans.push_back(lcm(a[i], b[i]));
    }

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        if (ans[i] > max(a[i], b[i]))
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
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