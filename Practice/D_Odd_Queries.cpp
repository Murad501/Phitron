// 13/08/2025 11:44
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
    int n, q;
    cin >> n >> q;
    vector<int> v;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        total += x;
        if (i == 0)
        {
            v.push_back(x);
        }
        else
        {
            v.push_back(x + v[i - 1]);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << nl;
    for (int i = 0; i < q; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        l--, r--;
        int sum = (r - l + 1) * k;
        int prev = v[r];

        if (l > 0)
        {
            prev -= v[l - 1];
        }
        int temp = total;
        // cout<<temp<<" "<<prev<<" "<<sum<<nl;
        temp -= prev;
        temp += sum;
        if (temp & 1)
        {
            yes;
        }
        else
        {
            no;
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