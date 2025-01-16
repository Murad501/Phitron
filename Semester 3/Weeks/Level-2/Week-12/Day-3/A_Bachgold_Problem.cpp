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
    bool isEven = false;
    if (n % 2 == 0)
    {
        isEven = true;
    }
    if (isEven)
    {
        cout << n / 2 << nl;
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        int val = n - 3;
        cout << (val / 2) + 1 << nl;
        for (int i = 1; i <= val / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << " ";
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}