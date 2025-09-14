// 13/08/2025 12:22
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
    vector<int> v;
    int curr = 0;
    while (n != 1)
    {
        int mod = n % 6;
        if (mod == 0 || mod == 3)
        {
            curr++;
            if (mod == 0)
            {
                n /= 6;
            }
            else
            {
                n *= 2;
            }
        }
        else
        {
            minus;
            return;
        }
    }
    cout << curr << nl;
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