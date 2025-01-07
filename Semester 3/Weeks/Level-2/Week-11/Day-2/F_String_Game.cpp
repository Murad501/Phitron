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
    string t, p;
    cin >> t >> p;
    vector<int> v;
    int n = t.size(), m = p.size();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x - 1);
    }


    auto ok = [&](int del)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= del; i++)
        {
            bad[v[i]] = true;
        }

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && t[i] == p[j])
            {
                j++;
            }
            if (j == m)
            {
                return true;
            }
        }

        return false;
    };

    int l = 0, r = n - 1, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout<<ans+1<<nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}