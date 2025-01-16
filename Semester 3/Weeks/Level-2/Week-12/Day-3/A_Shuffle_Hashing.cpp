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
    string s, h;
    cin >> s >> h;
    int n = s.size(), m = h.size();
    map<char, int> mp, check;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int l = 0, r = 0;
    bool ok = false;
    while (r < m)
    {
        if (r - l + 1 == n)
        {
            check[h[r]]++;
            bool flag = true;
            for (auto [key, value] : mp)
            {
                if (check[key] != value)
                {
                    // cout << " " << key << " " << value << " " << check[key] << nl;
                    flag = false;
                }
            }
            if (flag)
            {
                ok = true;
                break;
            }
            check[h[l]]--;
            r++;
            l++;
        }
        else
        {
            check[h[r]]++;
            r++;
        }
    }
    if (ok)
    {
        yes;
    }
    else
    {
        no;
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