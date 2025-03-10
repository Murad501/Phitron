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
    string s;
    cin >> s;
    int top = 0, bottom = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '_')
        {
            bottom++;
        }
        else
        {
            top++;
        }
    }
    if (top < 2 || bottom < 1)
    {
        zero;
    }
    else
    {
        int left = top / 2;
        int right = top / 2;
        if (top % 2 == 1)
        {
            right++;
        }
        ll ans = 1LL * left * right * bottom;
        cout << ans << nl;
    }
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