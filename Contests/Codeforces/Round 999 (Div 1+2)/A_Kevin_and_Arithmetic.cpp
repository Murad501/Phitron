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
    int odd_cnt = 0, even_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            even_cnt++;
        }
        else
        {
            odd_cnt++;
        }
    }

    int ans = 0;
    if (even_cnt > 0 && odd_cnt > 0)
    {
        ans = odd_cnt + 1;
    }
    else if (even_cnt > 0)
    {
        ans = 1;
    }
    else
    {
        ans = odd_cnt - 1;
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