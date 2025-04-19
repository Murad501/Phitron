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
    map<int, int> mp, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto [key, value] : mp)
    {
        if (value == 1)
        {
            ans[key] = 1;
        }
        else
        {
            if (key != 0)
            {
                if (value % 2 == 0)
                {
                    ans[0]++;
                }
                else
                {
                    ans[0]++;
                    ans[key]++;
                }
            }
            else
            {
                ans[0]++;
            }
        }
    }
    cout << ans.size() << nl;
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