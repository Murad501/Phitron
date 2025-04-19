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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    int zs = 0, zt = 0, miss = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zs++;
        }
        if (t[i] == '0')
        {
            zt++;
        }
        if (s[i] != t[i])
        {
            miss++;
        }
    }

    // cout<<s<<" "<<t<<nl;

    if (zs != zt)
    {
        no;
    }
    else
    {
        int mv = miss / 2;
        if (mv > k)
        {
            no;
        }
        else
        {
            // cout<<mv<<" "<<k<<nl;
            int rem = k - mv;
            if (rem % 2 == 0)
            {
                yes;
            }
            else
            {
                if (zs == 1 && n == 2)
                {
                    no;
                }
                else
                {
                    yes;
                }
            }
        }
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