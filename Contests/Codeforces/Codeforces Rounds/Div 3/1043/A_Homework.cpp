// 21/08/2025 20:37
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
    int n, m;
    string a, b, s;
    cin >> n >> a >> m >> b >> s;
    deque<char> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'D')
        {
            ans.push_back(b[i]);
        }
        else
        {
            ans.push_front(b[i]);
        }
    }

    int sz = ans.size();
    for (int i = 0; i < sz; i++)
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