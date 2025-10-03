// 15/09/2025 20:52
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
    vector<int> v, values;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x == 0)
        {
            z++;
        }
        else
        {
            values.push_back(x);
        }
    }

    if (z == 1)
    {
        sort(all(values));
        int miss = 1;
        int sz = values.size();

        for (int i = 0; i < sz; i++)
        {
            if (values[i] != miss)
            {
                break;
            }
            else
            {
                miss++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (v[i - 1] == 0)
            {
                v[i - 1] = miss;
            }
        }
    }

    int start = -1, end = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0 || v[i] != (i + 1))
        {
            if (start == -1)
            {
                start = i, end = i;
            }
            else
            {
                end = i;
            }
        }
    }
    if (start == end)
    {
        zero;
    }
    else
    {

        cout << (end - start) + 1 << nl;
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