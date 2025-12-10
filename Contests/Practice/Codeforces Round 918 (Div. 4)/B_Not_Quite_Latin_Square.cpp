// 09/11/2025 21:22
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
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        bool a = false, b = false, c = false;
        for (int j = 0; j < 3; j++)
        {
            if (s[j] == 'A')
            {
                a = true;
            }
            else if (s[j] == 'B')
            {
                b = true;
            }
            else if (s[j] == 'C')
            {
                c = true;
            }
        }

        if (!a)
        {
            cout << "A";
        }
        else if (!b)
        {
            cout << "B";
        }
        else if (!c)
        {
            cout << "C";
        }
    }
    cout << nl;
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