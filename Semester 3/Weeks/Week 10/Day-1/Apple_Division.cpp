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
    vector<ll> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }

    ll ans = sum;
    for (int i = 1; i <= (1 << n) - 1; i++)
    {
        ll tempSum1 = 0;
        ll tempSum2 = 0;
        int maxBit = __lg(i);
        string s;

        int need = n - maxBit - 1;
        for (int j = 0; j < need; j++)
        {
            s.push_back('0');
        }
        for (int j = maxBit; j >= 0; j--)
        {

            if (((i >> j) & 1) == 1)
            {
                s.push_back('1');
            }
            else
            {
                s.push_back('0');
            }
        }
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '1')
            {
                tempSum1 += v[j];
            }
            else
            {
                tempSum2 += v[j];
            }
        }
        ans = min(ans, abs(tempSum1 - tempSum2));
    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}