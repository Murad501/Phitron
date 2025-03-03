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
    if (k == 1)
    {
        if (n % 2 == 0)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else if (k == 2)
    {
        no;
    }
    else if (k % 2 == 0)
    {
        if ((k / 2) % 2 == 1)
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

        if (n % 2 == 1)
        {
            if ((k + 1) % 4 == 0)
            {
                yes;
            }
            else
            {
                no;
            }
        }
        else
        {
            if ((k + 1) % 4 == 0)
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

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}