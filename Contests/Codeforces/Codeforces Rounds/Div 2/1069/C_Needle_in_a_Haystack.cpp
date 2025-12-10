// 06/12/2025 14:52
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
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    map<char, int> cntS, cntT;
    map<char, map<int, int>> mp;

    for (int i = n - 1; i >= 0; i--)
    {
        cntS[s[i]]++;
        mp[s[i]][i] = cntS[s[i]];
    }

    for (int i = 0; i < m; i++)
    {
        cntT[t[i]]++;
    }

    bool ok = true;
    for (auto [key, value] : cntS)
    {
        if (value > cntT[key])
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        // sort(all(s));
        // sort(all(t));
        // // cout << "possible" << nl;
        // cout << s << nl;
        // cout << t << nl;
        // cout<<nl;
        string ans;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            cntT[c]--;
            for (auto [key, value] : cntT)
            {
                int mns = 0;
                if (key < c)
                {
                    auto need = mp[key].lower_bound(i);
                    if (need != mp[key].end())
                    {
                        int pos = value - (need->second);
                        // cout << "hello" << " " << need->second << " " << key << " " << value << nl;
                        // cout<<"hello"<<nl;
                        for (int j = 0; j < pos; j++)
                        {
                            ans += key;
                        }
                        mns = pos;
                    }
                    else
                    {
                        for (int j = 0; j < value; j++)
                        {
                            ans += key;
                        }
                        mns = value;
                    }
                    cntT[key] -= mns;
                }
                else
                {
                    break;
                }
            }
            ans += c;
        }
        for (auto [key, value] : cntT)
        {
            if (value > 0)
            {
                for (int i = 0; i < value; i++)
                {
                    ans += key;
                }
            }
        }
        // for (auto [key, values] : mp)
        // {
        //     cout << key << nl;
        //     for (auto [ky, cnt] : values)
        //     {
        //         cout << ky << " " << cnt << nl;
        //     }
        // }
        cout << ans << nl;
    }
    else
    {
        cout << "Impossible" << nl;
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