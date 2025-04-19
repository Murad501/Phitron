// 08/04/2025 20:42
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
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    ll cnt = 0;
    bool found = false;
    ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (!found)
        {
            if (s[i] != '0')
            {
                found = true;
            }
            else
            {
                cnt++;
            }
        }
        else
        {
            if (s[i] != '0')
            {
                cnt++;
            }
        }
    }
    cout << cnt << nl;
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