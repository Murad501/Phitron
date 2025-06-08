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
        ll n;
        cin >> n;

        ll ans = 0;
        int count = 0;
        while (n > 3)
        {
            n = n / 4;
            ans += (1 << count);
            count++;
        }
        if (n > 0)
        {
            ans += 1;
        }

        cout << ans << nl;
    }

    return 0;
}