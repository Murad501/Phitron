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
    vector<int> v;
    map<int, int> pos, bit;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int maxBit = __lg(x);
        int cnt = 0;
        for (int j = 0; j <= maxBit; j++)
        {
            if ((x >> j) & 1)
            {
                cnt++;
            }
        }
        pos[i + 1] = x;
        bit[x] = cnt;
    }

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        if (x - 1 != i)
        {
            int alt = pos[x];
            int alt_bit = bit[alt];
            int cur_bit = bit[x];
            if (alt_bit != cur_bit)
            {
                ok = false;
                break;
            }
        }
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
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