// 10/07/2025 23:40
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
    int n;
    cin >> n;
    int start = 1, diff = 3;
    for (int i = start; i <= (diff + start) - 1; i++)
    {
        bitset<5> bt(i);
        cout << bt << nl;
    }
    cout << nl;
    for (int i = diff+start; i <= ((diff*2) + start) - 1; i++)
    {
        bitset<5> bt(i);
        cout << bt << nl;
    }
    cout << nl;
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