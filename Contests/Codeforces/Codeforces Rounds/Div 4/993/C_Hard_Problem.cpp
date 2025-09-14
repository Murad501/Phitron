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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        ll ans = 0;
        ll remain = 0;

        if (a <= m)
        {
            ans += a;
            remain += m - a;
        }
        else
        {
            ans += m;
        }

        if (b <= m)
        {
            ans += b;
            remain += m - b;
        }
        else
        {
            ans += m;
        }

        if (c <= remain)
        {
            ans += c;
        }
        else
        {
            ans += remain;
        }

        cout << ans << nl;
    }
    return 0;
}