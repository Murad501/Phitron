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
    map<int, int> mp, sums;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
        mp[x]++;
    }

    for (auto [key, value] : mp)
    {
        if (value > 1)
        {
            sums[2 * key] += value / 2;
        }
        for (auto [k, v] : mp)
        {
            if (k > key)
            {
                sums[key + k] += min(value, v);
            }
        }
    }

    int possibleSum = 0, maxTimes = 0;
    for (auto [key, value] : sums)
    {
        if (value > maxTimes)
        {
            maxTimes = value;
            possibleSum = key;
        }
    }

    int ans = 0;
    while (s.size() > 1)
    {
        int first = *s.begin();
        int need = possibleSum - first;
        auto it = s.find(need);
        if (it == s.begin())
        {
            it++;
        }
        if (it == s.end() || *it != need)
        {
            s.erase(s.begin());
        }
        else
        {

            ans++;
            s.erase(it);
            s.erase(s.begin());
        }
    }

    cout << ans << nl;
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