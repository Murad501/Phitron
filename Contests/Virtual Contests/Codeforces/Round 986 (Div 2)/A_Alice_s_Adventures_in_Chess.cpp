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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0, i = 0;
    bool flag = false, ok = false;
    while (true)
    {
        if (s[i] == 'N')
        {
            y++;
        }
        else if (s[i] == 'S')
        {
            y--;
        }
        else if (s[i] == 'E')
        {
            x++;
        }
        else if (s[i] == 'W')
        {
            x--;
        }

        if (x == a && y == b)
        {
            ok = true;
            break;
        }

        // cout<<x<<" "<<y<<nl;

        if ( x == 0 && y == 0)
        {
            if (!flag)
            {
                flag = true;
            }
            else
            {
                break;
            }
        }
        else if (x > a || y > b)
        {
            if (!flag)
            {
                flag = true;
            }
            else
            {
                break;
            }
        }
        if (i == n - 1)
        {
            i = 0;
        }
        else
        {
            i++;
        }
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
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