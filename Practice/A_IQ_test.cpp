// 25/10/2025 20:15
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int odd = 0, even = 0;
    int oid = 0, eid = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x & 1)
        {
            odd++;
            oid = i + 1;
        }
        else
        {
            even++;
            eid = i + 1;
        }
    }

    if (odd == 1)
    {
        cout << oid << nl;
    }
    else
    {
        cout << eid << nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}