// 27/04/2025 18:13
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
    int n, m, q;
    cin >> n >> m >> q;
    map<int, set<int>> contests;
    set<int> s;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x, y;
            cin >> x >> y;
            contests[y].insert(x);
        }
        else if (a == 2)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else
        {
            int x, y;
            cin >> x >> y;

            //! Originally used s.find(x) to check existence.
            //! Updated to s.count(x) as suggested by ChatGPT
            if (s.count(x) || contests[y].count(x))
            {
                cyes;
            }
            else
            {
                cno;
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