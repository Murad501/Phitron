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

    map<int, int> mp;
    multiset<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
    }

    int single = 0;

    for (auto [key, value] : mp)
    {
        if (value < 2)
        {
            if (single < 2)
            {

                ans.insert(key);
                single++;
            }
        }
        else
        {
            int sz = ans.size();
            for (int i = 0; i < min(value, (4 - sz)); i++)
            {
                ans.insert(key);
            }
        }

        if (ans.size() == 4)
        {
            break;
        }
    }

    if (ans.size() == 4)
    {
        for (auto key : ans)
        {
            cout << key << " ";
        }
        cout << nl;
    }
    else
    {
        minus;
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