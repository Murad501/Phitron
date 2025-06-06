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
    int n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll inversions = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        else
        {
            inversions += cnt;
        }
    }
    ll ans;
    if (inversions == 0)
    {
        ans = 1;
    }
    else
    {
        if (inversions > x)
        {
            ans = 2;
        }
        else
        {
            if (inversions % k == 0)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
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