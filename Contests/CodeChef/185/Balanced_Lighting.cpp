// 07/05/2025 20:30
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
    int one = 0, two = 0, zeros = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zeros++;
        }
        else if (x == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    if (n % 2 != 0)
    {
        cno;
    }
    else
    {
        while (zeros)
        {
            if (one < two)
            {
                one++;
            }
            else
            {
                two++;
            }
            zeros--;
        }
        if (one == two)
        {
            cyes;
        }
        else
        {
            cno;
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