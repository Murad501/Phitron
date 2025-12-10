// 06/11/2025 21:45
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;

    reverse(all(s));
    reverse(all(t));
    int l = 0, r = 0;
    vector<pair<int, int>> pr;
    bool ok = true;
    vector<string> ans;
    int mx = 0;
    while (r < n)
    {
        if (s[l] != t[r])
        {
            while (l < n && s[l] != t[r])
            {
                l++;
            }
            if (l == n)
            {
                ok = false;
                break;
            }
            else
            {
                mx = max(mx, (l - r));
                pr.push_back({r, l});
                r++;
            }
        }
        else
        {
            pr.push_back({r, l});
            mx = max(mx, (l - r));
            if (l > r)
            {
                r++;
            }
            else
            {
                l++, r++;
            }
        }
    }

    if (!ok || mx > k)
    {
        minus;
    }
    else
    {
        cout << mx << nl;
        if (mx > 0)
        {
            string curr = s;
            int sz = pr.size();
            for (int i = 0; i < mx; i++)
            {
                for (int j = 0; j < sz; j++)
                {
                    int l = pr[j].first, r = pr[j].second;
                    if (l != r)
                    {
                        curr[r - 1] = t[l];
                        pr[j] = {l, r - 1};
                    }
                }
                ans.push_back(curr);
            }
        }
        int k = ans.size();
        for (int i = 0; i < k; i++)
        {
            string temp = ans[i];
            reverse(all(temp));
            cout << temp << nl;
        }
    }
}

int32_t main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}