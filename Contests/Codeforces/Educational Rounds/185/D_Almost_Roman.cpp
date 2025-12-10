// 28/11/2025 22:03
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int available = 0, sum = 0, possible = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
        {
            sum += 10;
        }
        else if (s[i] == 'V')
        {
            sum += 5;
        }
        else if (s[i] == 'I')
        {
            if (i < n - 1)
            {
                if (s[i + 1] == 'X' || s[i + 1] == 'V')
                {
                    sum--;
                }
                else if (s[i + 1] == 'I')
                {
                    sum++;
                }
                else
                {
                    possible++;
                }
            }
            else
            {
                sum++;
            }
        }
        else
        {
            total++;
            if (i < n - 1)
            {
                if (s[i + 1] == 'X' || s[i + 1] == 'V')
                {
                    available++;
                }
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = sum;
        if (z && !y && !x)
        {
            ans += possible;
            int mn = min(z, available);
            ans -= mn;
            ans += (z - mn);
        }
        else if (y && !z && !x)
        {

            int mn = min(y, available);
            ans += (mn * 5);
            int pos2 = min(possible, mn)

        }
        else if (x && !z && !y)
        {
            int mn = min(y, possible);
            ans -= mn;
            ans += (y - mn);
        }
    }
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