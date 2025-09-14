// 14/08/2025 08:50
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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int sz = n;

    int l = 0, r = n - 1;
    while (l < r)
    {
        if (v[l] == sz)
        {
            l++;
            sz--;
        }
        else if (v[r] == sz)
        {
            r--;
            sz--;
        }
        else
        {
            break;
        }
    }
    if (abs(r - l) < 2)
    {
        no;
    }
    else
    {
        yes;
        cout << l + 1 << " ";
        for (int i = l + 1; i < r; i++)
        {
            if (v[i] > v[l] && v[i] > v[r])
            {
                cout << i + 1 << " ";
                break;
            }
        }
        cout << r + 1 << " ";
        cout<<nl;
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