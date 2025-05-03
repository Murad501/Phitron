// 30/04/2025 20:30
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
    if (n == 1)
    {
        minus;
    }
    else if (n % 2 == 0)
    {
        int half = n / 2;
        for (int i = 0; i < half; i++)
        {
            cout << 2 << " ";
        }
        for (int i = 0; i < half; i++)
        {
            cout << -2 << " ";
        }
        cout << nl;
    }
    else
    {
        int half = n / 2;
        for (int i = 0; i < half; i++)
        {
            cout << 2 << " ";
        }
        cout << 1 << " ";
        int need = 2 * (n / 2);
        need++;
        cout << -3 << " ";
        need -= 3;
        while (need)
        {
            cout << -2 << " ";
            need -= 2;
        }
        cout << nl;
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