// 17/05/2025 18:53
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
    int h, w, n;
    cin >> h >> w >> n;
    map<int, set<int>> rw, cl;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        rw[x].insert(y);
        cl[y].insert(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            set<int> s = rw[y];
            cout << s.size() << nl;
            for (int key : s)
            {
                cl[key].erase(y);
            }
            s.clear();
            rw[y] = s;
        }
        else
        {
            set<int> s = cl[y];
            cout << s.size() << nl;
            for (int key : s)
            {
                rw[key].erase(y);
            }
            cl[y] = s;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}