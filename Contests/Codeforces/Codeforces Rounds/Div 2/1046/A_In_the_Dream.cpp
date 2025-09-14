// 28/08/2025 20:36
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a >= b)
    {
        int pos = b * 2;
        pos += 2;
        if (pos < a)
        {
            no;
        }
        else
        {
            a = c - a;
            b = d - b;

            if (a >= b)
            {
                int pos = b * 2;
                pos += 2;
                if (pos < a)
                {
                    no;
                }
                else
                {
                    yes;
                }
            }
            else
            {
                int pos = a * 2;
                pos += 2;
                if (pos < b)
                {
                    no;
                }
                else
                {
                    yes;
                }
            }
        }
    }
    else
    {
        int pos = a * 2;
        pos += 2;
        if (pos < b)
        {
            no;
        }
        else
        {
            a = c - a;
            b = d - b;

            if (a >= b)
            {
                int pos = b * 2;
                pos += 2;
                if (pos < a)
                {
                    no;
                }
                else
                {
                    yes;
                }
            }
            else
            {
                int pos = a * 2;
                pos += 2;
                if (pos < b)
                {
                    no;
                }
                else
                {
                    yes;
                }
            }
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