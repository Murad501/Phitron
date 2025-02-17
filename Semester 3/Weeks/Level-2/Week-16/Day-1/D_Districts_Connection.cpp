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
    cin >> n;
    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x].push_back(i + 1);
    }
    if (mp.size() == 1)
    {
        no;
    }
    else
    {
        yes;
        int center = mp.begin()->second[0];
        int idx = 0;
        for (auto [key, values] : mp)
        {
            if (idx == 0)
            {
                idx++;
                continue;
            }
            for (auto val : values)
            {
                cout << center << " " << val << nl;
            }
        }

        int center2 = mp.rbegin()->second[0];
        idx = 0;
        for (auto val : mp.begin()->second)
        {
            if (idx == 0)
            {
                idx++;
                continue;
            }
            cout << center2 << " " << val << nl;
        }
    }
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