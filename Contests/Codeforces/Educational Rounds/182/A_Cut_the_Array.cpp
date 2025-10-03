// 15/09/2025 20:36
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
    vector<int> v, prefix;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (i == 0)
        {
            prefix.push_back(x);
        }
        else
        {
            prefix.push_back(prefix[i - 1] + x);
        }
    }
    int l = -1, r = -1;
    for (int i = 1; i < n - 1; i++)
    {
        int prev = prefix[i - 1];
        int next = prefix[n - 1] - prefix[i];
        int curr = v[i];
        int a = prev % 3, b = curr % 3, c = next % 3;
        if (a == b && b == c)
        {
            l = i, r = i + 1;
            break;
        }
        else if (a != b && b != c && a != c)
        {

            l = i, r = i + 1;
            break;
        }
    }
    if (l == -1)
    {
        cout << 0 << " " << 0 << nl;
    }
    else
    {

        cout << l << " " << r << nl;
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