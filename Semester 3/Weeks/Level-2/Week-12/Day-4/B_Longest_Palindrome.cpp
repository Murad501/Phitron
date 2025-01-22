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
    int n, m;
    cin >> n >> m;
    map<string, int> mp, ans;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    string single = "";
    int count = 0;
    for (auto [key, value] : mp)
    {
        string temp = key;
        reverse(temp.begin(), temp.end());
        if (key != temp)
        {
            if (mp[temp] > 0 && value > 0)
            {
                auto it = mp.find(key);
                auto it2 = mp.find(temp);
                int minT = min(value, mp[temp]);
                if (ans[key] == 0 && ans[temp] == 0)
                {
                    ans[key] = minT;
                }
            }
        }
        else
        {
            if (value > count)
            {
                single = key;
                count = value;
            }
        }
    }

    string first, last;
    for (auto [key, value] : ans)
    {
        for (int i = 0; i < value; i++)
        {
            first.append(key);
            last.append(key);
        }
    }
    reverse(last.begin(), last.end());

    cout << (first.size() * 2) + (single.size() * count) << nl;

    cout << first;
    for (int i = 0; i < count; i++)
    {
        cout << single;
    }
    cout << last << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}