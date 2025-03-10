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
    int n;
    cin >> n;
    ll cur = 0, ans = 10;
    for (int i = 0; i < 10; i++)
    {
        ll m = n;
        cur *= 10;
        cur += 9;

        ll mv = 0;
        for (int j = 0; j < 10; j++)
        {

            ll temp = m;
            bool flag = false;
            while (temp)
            {
                int d = temp % 10;
                if (d == 7)
                {
                    flag = true;
                    break;
                }
                temp /= 10;
            }
            if (flag){

                ans = min(ans, mv);
            }
            m += cur;
            mv++;
        }
    }

    cout<<ans<<nl;
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