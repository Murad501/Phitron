// 14/11/2025 20:38
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
    int n, a;
    cin >> n >> a;
    vector<int> v;
    int left = 0, right = 0, mid = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x < a)
        {
            left++;
        }
        else if (x > a)
        {
            right++;
        }
      
    }

    if (left > right)
    {
        cout << a - 1 << nl;
    }
    else if (right > left)
    {
        cout << a + 1 << nl;
    }
    else
    {
        cout << a << nl;
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