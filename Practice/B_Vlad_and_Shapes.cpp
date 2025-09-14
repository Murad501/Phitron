// 03/08/2025 10:43
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
    int n;
    cin >> n;
    bool square = true;
    int cnt = -1;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int cnt2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                cnt2++;
            }
        }
        // cout<<cnt<<" "<<cnt2<<nl;
        if (cnt2 > 0)
        {
            if (cnt == -1)
            {
                cnt = cnt2;
            }
            else
            {
                if (cnt != cnt2)
                {
                    // cout << cnt << " " << cnt2 << nl;
                    square = false;
                }
            }
        }
    }
    if (square)
    {
        cout << "SQUARE" << nl;
    }
    else
    {
        cout << "TRIANGLE" << nl;
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