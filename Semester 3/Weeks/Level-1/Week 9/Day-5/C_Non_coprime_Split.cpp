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

bool isPrime(ll x)
{
    bool flag = true;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int l, r;
    cin >> l >> r;

    if (r < 4)
    {
        minus;
        return;
    }
    if (r % 2 == 0)
    {
        cout << r - 2 << " " << 2 << nl;
    }
    else
    {

        if (r - l > 0)
        {

            cout << r - 3 << " " << 2 << nl;
        }
        else
        {
            bool ok = isPrime(r);
            int a = -1, b = -1;
            if (!ok)
            {
                for (int i = 3; i <= r / 2; i++)
                {
                    int gcd = __gcd(i, r - i);
                    if (gcd > 1)
                    {
                        a = i;
                        b = r - i;
                        break;
                    }
                }

                cout << a << " " << b << nl;
            }

            else
            {
                minus;
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