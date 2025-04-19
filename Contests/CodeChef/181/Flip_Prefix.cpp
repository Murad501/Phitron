// 09/04/2025 20:53
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
    ll n;
    cin >> n;
    cin >> s;

    ll z = 0, o = 0, count = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        else
        {
            o++;
        }

        if (z == o)
        {
            count++;
        }
    }

    ll curr = 1, ans = 1;
    for (ll i = count; i >= 0; i--)
    {
        ll cnt = curr * i;
        curr = cnt;
        ans += cnt;
    }
    // cout<<count<<nl;
    if(count > 1){
        ans--;
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