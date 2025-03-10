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
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x]++;
    }

    int ans = n - mp.size();
    if (ans == 0)
    {
        cout << 1 << " " << n << nl;
    }
    else
    {
        int ansL = 1, ansR = n;
        bool ok = false;
        int l = 0, r = 0;
        int len = 0;
        while (r < n)
        {
            if (mp[v[r]] == 1)
            {

                if (r - l + 1 > len)
                {
                    len = r - l + 1;
                    ansL = l + 1;
                    ansR = r + 1;

                    ok = true;
                }
                r++;
            }
            else
            {
                l = r + 1;
                r++;
            }
        }

        if (ok)
        {

            cout << ansL << " " << ansR << nl;
        }
        else
        {
            cout << 0 << nl;
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