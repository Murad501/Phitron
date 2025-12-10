// 19/11/2025 20:43
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
    string s;
    cin >> s;
    vector<pair<int, int>> pr;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'I')
        {
            int j = i;
            while (j < n && s[j] == 'I')
            {
                j++;
            }
            pr.push_back({i, j - 1});
            i = j;
        }
        else
        {
            i++;
        }
    }
    int sz = pr.size();
    for (int i = 0; i < sz; i++)
    {
        int idx = pr[i].first;
        int idx2 = pr[i].second;
        bool ok = false;
        if (idx > 1)
        {
            if (s[idx - 1] == s[idx - 2])
            {
                ok = true;
                for (int j = idx; j <= idx2; j++)
                {
                    s[j] = s[idx - 1];
                }
            }
        }
        if (idx2 < n - 2 && !ok)
        {
            if (s[idx2 + 1] == s[idx2 + 2] || s[idx2 + 2] == 'I')
            {
                ok = true;
                for (int j = idx; j <= idx2; j++)
                {
                    s[j] = s[idx2 + 1];
                }
            }
        }
        if (!ok)
        {
            if (idx > 0)
            {
                for (int j = idx; j <= idx2; j++)
                {
                    s[j] = s[idx - 1];
                }
            }
            else if (idx2 < n - 1)
            {
                for (int j = idx; j <= idx2; j++)
                {
                    s[j] = s[idx2 + 1];
                }
            }
        }
    }

    if (s[0] == s[n - 1])
    {
        int cnt1 = 0, cnt2 = 0;
        int i = 0, j = n - 1;
        while (i < n && s[i] == s[0])
        {
            cnt1++;
            i++;
        }
        while (j >= 0 && s[j] == s[0])
        {
            cnt2++;
            j--;
        }
        if (cnt1 + cnt2 == n || cnt1 == n)
        {
            cout << (n * k) - 1 << nl;
        }
        else
        {
            int cnt = 1, ans = 0;
            while (i < j)
            {

                if (s[i] == s[i + 1])
                {
                    cnt++;
                }
                else
                {
                    ans += (cnt - 1);
                    cnt = 1;
                }
                i++;
            }
            // cout<<cnt1<<" "<<cnt2<<" "<<ans<<nl;
            ans += (cnt - 1);
            ans*=k;
            ans += (cnt1 - 1);
            ans += (cnt2 - 1);
            ans += ((cnt1 + cnt2) - 1) * (k - 1);
            cout << ans << nl;
        }
    }
    else
    {
        int cnt = 1;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
            }
            else
            {
                ans += (cnt - 1);
                cnt = 1;
            }
        }
        ans += (cnt - 1);
        ans *= k;
        cout << ans << nl;
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