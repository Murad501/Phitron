// 04/08/2025 09:11
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

    int cnt = 0;
    int prev = v[0];
    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        int val = v[i];
        if (prev > val)
        {
            if (val == 1)
            {
                ok = false;
                break;
            }
            else
            {
                while (val < prev)
                {
                    val *= val;
                    cnt++;
                }
                v[i] = val;
                prev = max(prev, val);
            }
        }
        else
        {
            prev = max(prev, val);
        }
    }
    if (!ok)
    {
        minus;
    }
    else
    {

        cout << cnt << nl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //      cout<<v[i]<<" ";
    // }
    // cout<<nl;
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