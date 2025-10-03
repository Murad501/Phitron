// 27/09/2025 18:07
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
    map<int, int> mp;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x > 0)
        {
            mp[x]++;
            if (mp[x] > 1)
            {
                ok = false;
            }
        }
    }

    if (!ok)
    {
        cno;
    }
    else
    {
        int curr = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                while (mp[curr] > 0)
                {
                    curr++;
                }
                v[i] = curr;
                curr++;
            }
        }
        cyes;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}