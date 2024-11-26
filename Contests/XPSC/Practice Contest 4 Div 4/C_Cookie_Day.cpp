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
        int n, k;
        cin >> n >> k;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= k)
            {
                int mod = x % k;
                if (ans == -1)
                {
                    ans = mod;
                }
                else
                {
                    ans = min(ans, mod);
                }
            }
        }
        cout << ans << nl;
    }

    return 0;
}