#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b)
        {
            cout << 1 << nl;
        }
        else if (a == b)
        {
            if (b < c)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 3 << nl;
            }
        }
        else
        {
            if (c < b)
            {
                cout << 2 << nl;
            }
            else
            {
                ll x = (c - b) + c;
                if (a == x)
                {
                    cout << 3 << nl;
                }
                else if (a < x)
                {
                    cout << 1 << nl;
                }
                else
                {
                    cout << 2 << nl;
                }
            }
        }
    }
    return 0;
}