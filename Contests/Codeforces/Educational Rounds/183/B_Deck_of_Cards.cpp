// 06/10/2025 20:39
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
    string s;
    cin >> s;
    int z = 0, o = 0, tw = 0;

    vector<char> ans(n);
    for (int i = 0; i < k; i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        else if (s[i] == '1')
        {
            o++;
        }
        else
        {
            tw++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = '+';
    }
    for (int i = 0; i < z; i++)
    {
        ans[i] = '-';
    }

    for (int i = (n - o); i < n; i++)
    {
        ans[i] = '-';
    }
    int l = z, r = (n - o - 1);
    int rem = (n - (o + z));

    if (tw == rem)
    {

        for (int i = l; i <= r; i++)
        {
            ans[i] = '-';
        }
    }
    else
    {
        while (l <= r && tw)
        {
            ans[l] = '?', ans[r] = '?';
            l++, r--, tw--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }

    cout << nl;
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