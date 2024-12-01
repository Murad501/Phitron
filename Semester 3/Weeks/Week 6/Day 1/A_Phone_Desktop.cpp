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
        int x, y;
        cin >> x >> y;
        int ans = 0;
        if (x == 0 && y == 0)
        {
            ans = 0;
        }
        else if (x == 0 && y != 0)
        {
            ans = y / 2;
            if (y % 2 != 0)
            {
                ans++;
            }
        }
        else if (x != 0 && y == 0)
        {
            ans = x / 15;
            if (x % 15 != 0)
            {
                ans++;
            }
        }
        else
        {
            ans = y / 2;
            if (y % 2 != 0)
            {
                ans++;
            }
            int totalCell = ans * 15;
            int available = totalCell - (y * 4);
            if (x > available)
            {
                int remaining = x - available;
                ans += remaining / 15;
                if (remaining % 15 != 0)
                {
                    ans++;
                }
            }
        }
        cout << ans << nl;
    }
    return 0;
}