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
        int maxBit = __lg(x);

        int ans = 1;
        int zero = 0;
        int one = 0;
        int b = pow(2, maxBit);

        for (int i = maxBit; i >= 0; i--)
        {
            if (((x >> i) & 1) == 0)
            {

                if (one > 1)
                {
                    zero++;
                }
            }
            else
            {

                one++;
            }
        }

        if (x - b > 1)
        {
            ans = pow(2, zero);
        }

        cout << ans << nl;
    }
    return 0;
}