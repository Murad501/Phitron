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
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        minus;
    }
    else
    {
        int maxBitX = __lg(x);
        int maxBitY = __lg(y);
        int maxBit = max(maxBitX, maxBitY);
        string sx, sy;
        if (maxBitX < maxBit)
        {
            int len = maxBit - maxBitX;
            for (int i = 0; i < len; i++)
            {
                sx += '0';
            }
        }
        if (maxBitY < maxBit)
        {
            int len = maxBit - maxBitY;
            for (int i = 0; i < len; i++)
            {
                sy += '0';
            }
        }
        for (int i = maxBitX; i >= 0; i--)
        {
            if (x & (1 << i))
            {
                // cout << 1;
                sx += '1';
            }
            else
            {
                // cout << 0;
                sx += '0';
            }
        }
        cout << nl;
        for (int i = maxBitY; i >= 0; i--)
        {
            if (y & (1 << i))
            {
                // cout << 1;
                sy += '1';
            }
            else
            {
                // cout << 0;
                sy += '0';
            }
        }
        cout << sx << nl;
        cout << sy << nl;
        cout << nl;
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