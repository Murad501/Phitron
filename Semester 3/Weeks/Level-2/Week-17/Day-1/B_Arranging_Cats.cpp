#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    string s, f;
    cin >> s >> f;
    int z = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != f[i])
        {
            if (s[i] == '1')
                o++;
            else
                z++;
        }
    }

    int ans = 0;
    ans += min(z, o);
    if (z != o)
    {
        ans += max(z, o) - min(z, o);
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}