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
    ll n, k, x, sum = 0;
    cin >> n >> k >> x;
    vector<ll> v;
    vector<ll> prefix(n);
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;

        v.push_back(a);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            prefix[i] = v[i];
        }
        else
        {
            prefix[i] = prefix[i + 1] + v[i];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << prefix[i] << " ";
    // }

    ll sumIdx = -1;
    reverse(prefix.begin(), prefix.end());

    ll temp = n;
    for (int i = 1; i <= k; i++)
    {
        // cout<<i  * sum<<nl;
        bool flag = false;
        if (sum * i >= x)
        {
            for (int j = 0; j < n; j++)
            {
                //  cout<<prefix[j]<<" ";

                ll val = ((i - 1) * sum) + prefix[j];
                if (val < x)
                {
                }
                else
                {
                    temp = ((i - 1) * n) + j;
                    // cout << "idx -> " << ((i - 1) * n) + j << " " << ((i - 1) * sum) + prefix[j] << nl;
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            break;
    }

    if (sum * k < x)
    {
        zero;
    }
    else
    {

        cout << (n * k) - temp << nl;
    }
    // cout << sumIdx << nl;
    // cout << nl;
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