#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
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
    map<int, int> mp;
    vector<int> p, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.push_back(x);
        mp[i + 1] = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }

    set<int> s;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (n == ans)
        {
            cout << ans << " ";
            continue;
        }
        int idx = d[i];
        int val = mp[idx];

        auto it = s.find(val);
        if (idx != val)
        {
            // queue<int>q;
            int id = val;
            while (true)
            {
                int vl = mp[id];
                auto it2 = s.find(vl);
                if (it2 == s.end())
                {

                    s.insert(vl);
                    ans++;
                    id = vl;
                }
                else
                {
                    break;
                }
            }

            // auto it2 = s.find(vl);
            // if (it == s.end())
            // {
            //     s.insert(val);
            //     ans++;
            // }
            // if (it2 == s.end())
            // {

            //     s.insert(vl);
            //     ans++;
            // }
        }
        else
        {
            if (it == s.end())
            {
                s.insert(val);
                ans++;
            }
        }
        cout << ans << " ";
    }
    cout << nl;
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}