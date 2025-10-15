// 12/10/2025 21:43
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

int reverseBits(int n)
{
    int rev = 0;

    while (n > 0)
    {
        rev <<= 1;
        if (n & 1)
            rev |= 1;
        n >>= 1;
    }

    return rev;
}

void solve()
{
    int n;
    cin >> n;
    int cnt = __builtin_popcount(n);

    if (cnt & 1)
    {
        no;
    }
    else
    {
        yes;
    }
    vector<int> valids, invalids;
    for (int i = 0; i <= 100; i++)
    {
        bool ok = false;
        for (int j = 1; j <= 200; j++)
        {
            // cout<<j<<" "<<reverseBits(j)<<" "<<i<<nl;
            if ((j ^ reverseBits(j)) == i)
            {
                // cout<<j<<" "<<i<<nl;
                ok = true;
                break;
            }
        }
        if (ok)
        {
            valids.push_back(i);
        }
        else
        {
            invalids.push_back(i);
        }
    }
    cout << valids.size() << " " << invalids.size() << nl;
    int m = valids.size();
    for (int i = 0; i < m; i++)
    {
        cout << bitset<16>(valids[i]) << nl;
        
    }
    cout << nl;
    m = invalids.size();
    for (int i = 0; i < m; i++)
    {
        cout << bitset<16>(invalids[i]) << nl;
    }
    cout << nl;
    cout << nl;
    // cout<<cnt<<nl;
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