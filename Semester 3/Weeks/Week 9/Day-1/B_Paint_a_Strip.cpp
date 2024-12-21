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
        int x;
        cin >> x;

        ll current = 1;
        int ans = 1;
        while (current < x)
        {
            ll val = current * 2;
            current = val + 2;
            ans++;
        }

        cout << ans << nl;
    }

    return 0;
}