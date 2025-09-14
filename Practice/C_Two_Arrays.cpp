// 24/06/2025 23:13
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
    map<int, int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }

    vector<int> v;

    for (auto [key, value] : b)
    {
        v.push_back(key);
    }
    reverse(all(v));

    bool ok = true;
    for (int i = 0; i < v.size(); i++)
    {
        int key = v[i];
        int value = b[key];
        if (a[key] >= value)
        {
            if (a[key] > value)
            {
                ok = false;
                break;
            }
        }
        else
        {
            int need = value - a[key];
            if (a[key - 1] >= need)
            {
                a[key - 1] -= need;
            }
            else
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

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}