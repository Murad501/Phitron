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
    int n, m;
    cin >> n >> m;

    if (n > m || (n % 2 == 0 && m % 2 == 1))
    {
        cno;
        return;
    }
    if (n == 1)
    {
        cyes;
        cout << m << nl;
        return;
    }
    if (n % 2 == 0)
    {
        cyes;
        for (int i = 0; i < n - 2; i++)
        {
            cout << 1 << " ";
        }
        int available = m - (n - 2);
        cout << available / 2 << " " << available / 2 << nl;
    }
    else
    {
        cyes;
        for (int i = 0; i < n - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << m - n + 1 << nl;
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