// 19/05/2025 00:49
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
    int n, m;
    cin >> n >> m;
    vector<int> v;
    multiset<int> mt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mt.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (mt.empty())
        {
            minus;
            continue;
        }

        auto it = mt.lower_bound(x);
        if (it != mt.end())
        {
            if (*it > x)
            {
                if (it != mt.begin())
                {
                    it--;
                    cout << *it << nl;
                    mt.erase(it);
                }
                else
                {
                    minus;
                }
            }
            else
            {
                cout << *it << nl;
                mt.erase(it);
            }
        }
        else
        {
            it--;
            if (*it > x)
            {
                minus;
            }
            else
            {
                cout << *it << nl;
                mt.erase(it);
            }
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}