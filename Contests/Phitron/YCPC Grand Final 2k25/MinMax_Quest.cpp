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
    int q;
    cin >> q;
    map<int, int> values;
    map<int, set<int>> counts;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x;
            cin >> x;
            values[x]++;
            if (values[x] == 1)
            {
                counts[1].insert(x);
            }
            else
            {
                counts[values[x] - 1].erase(x);
                if (counts[values[x] - 1].size() == 0)
                {
                    counts.erase(values[x] - 1);
                }
                counts[values[x]].insert(x);
            }
        }
        else
        {
            set<int> s = counts.begin()->second;
            if (s.size() == 0)
            {
                cout << "empty" << nl;
            }
            else
            {
                int val = *s.rbegin();
                cout << val << nl;
                int times = counts.begin()->first;
                int available = times - max(1, times / 2);
                counts.begin()->second.erase(val);
                if (available == 0)
                {
                    values.erase(val);
                }
                else
                {
                    values[val] = available;
                    counts[available].insert(val);
                }
            }
        }
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}