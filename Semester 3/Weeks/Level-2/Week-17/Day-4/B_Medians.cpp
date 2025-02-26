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
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 1 << nl;
        cout << 1 << nl;
    }
    else if (k == 1 || k == n)
    {
        minus;
    }
    else
    {
        cout << 3 << nl;
        if ((k - 1) % 2 == 0)
        {
            cout << 1 << " " << k - 1 << " " << k + 2 << nl;
        }
        else
        {

            cout << 1 << " " << k << " " << k + 1 << nl;
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