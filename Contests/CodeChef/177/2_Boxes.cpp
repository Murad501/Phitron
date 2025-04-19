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
    int x, y, k;
    cin >> x >> y >> k;
    int diff = abs(x - y);
    if (diff == k)
    {
        zero;
    }
    else
    {
        if ((diff % 2 == 0 && k % 2 == 1) || (diff % 2 == 1 && k % 2 == 0))
        {
            minus;
        }
        else
        {

            int val = abs(k - diff);
            cout << val / 2 << nl;
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