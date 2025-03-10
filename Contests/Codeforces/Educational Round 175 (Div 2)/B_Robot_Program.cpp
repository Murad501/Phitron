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
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    bool flag = false;
    ll ans = 0;
    ll sec = 0;
    ll currX = x;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            currX--;
        }
        else
        {
            currX++;
        }
        sec++;
        if (currX == 0)
        {
            ans++;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        zero;
    }
    else
    {
        bool found = false;
        ll cntL = 0, cntR = 0;
        if (s[0] == 'L')
        {
            cntL++;
        }
        else
        {
            cntR++;
        }

        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'L')
            {
                cntL++;
            }
            else
            {
                cntR++;
            }
            if (cntL == cntR)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << ans << nl;
        }
        else
        {
            ll onePerSec = cntL + cntR;
            ll availableSec = k - sec;
            ans += (availableSec / onePerSec);
            cout << ans << nl;
        }
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