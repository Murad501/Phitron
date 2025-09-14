// 09/08/2025 08:58
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
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            cnt++;
        }
    }
    cout << cnt << nl;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0')
        {
            cout << s[i];
            for (int j = i + 1; j < n; j++)
            {
                cout << 0;
            }
            cout << " ";
        }
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