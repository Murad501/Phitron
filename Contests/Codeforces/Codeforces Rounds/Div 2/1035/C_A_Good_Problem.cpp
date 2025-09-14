// 05/07/2025 21:06
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
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
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n % 2 == 1)
    {
        cout << l << nl;
    }
    else
    {
        if (n == 2)
        {
            minus;
        }
        else
        {
            int diff = n - k;
            if (diff <= 1)
            {

                int mxB = __lg(l);
                int mxB2 = __lg(r);
                int diff2 = (mxB2 - mxB);
                if (diff2 == 0)
                {
                    minus;
                }
                else
                {
                    int val = pow(2, (mxB + 1));
                    cout << val << nl;
                }
                // cout<<max(mxB, mxB2)<<nl;
                // int mx = max(mxB, mxB2);

                // cout<<val<<nl;
            }
            else
            {
                cout << l << nl;
            }
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}