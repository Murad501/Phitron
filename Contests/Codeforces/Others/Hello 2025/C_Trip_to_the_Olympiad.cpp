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
    int l, r;
    cin >> l >> r;
   

    int a = 0, b = 0, c = 0;
    for (int i = 29; i >= 0; i--)
    {
        if ((l ^ r) >> i & 1)
        {
            b |= 1 << i;
            a |= (1 << i) - 1;
            break;
        }
        else
        {
            a |= l & (1 << i);
            b |= l & (1 << i);
        }
    }

    c = l;
    while (c == a || c == b)
    {
        c++;
    }

    cout << a << " " << b << " " << c << "\n";
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