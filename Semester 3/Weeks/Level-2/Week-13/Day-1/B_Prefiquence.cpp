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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int last = 0, ans = 0;
    for (int i = 0; i < min(n, m); i++)
    {

        bool ok = false;
        for (int j = last; j < m; j++)
        {

            if (a[i] == b[j])
            {
                last = j + 1;
                ans++;
                ok = true;
                break;
            }
        }
        if (!ok)
            break;
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