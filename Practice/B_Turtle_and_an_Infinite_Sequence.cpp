// 16/05/2025 08:22
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
    cin >> n >> m;
    string s;
    for (int i = 0; i < 64; i++)
    {
        s.push_back('0');
    }
    int maxBit = __lg(n);
    for (int k = 0; k <= maxBit; k++)
    {
        if ((n >> k) & 1)
        {
            s[k] = '1';
        }
    }

    int available = 0;
    for (int i = 0; i < 64; i++)
    {
        int need = (pow(2, i));
        if (need - available > m && i > maxBit)
        {
            break;
        }
        if (s[i] == '0')
        {
            if (need - available <= m)
            {
                s[i] = '1';
            }
            if (i < maxBit)
            {

                if (m > available)
                {
                    s[i] = '1';
                }
            }
        }
        else
        {
            available += (pow(2, i));
        }
    }

    reverse(s.begin(), s.end());

    cout << stoll(s, nullptr, 2) << nl;
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