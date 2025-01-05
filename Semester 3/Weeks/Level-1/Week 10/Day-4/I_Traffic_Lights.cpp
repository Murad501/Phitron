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
    int x, n;
    cin >> x >> n;
    map<int, int> mp;
    mp.insert({x, 1});
    set<int> s;
    s.insert(0);
    s.insert(x);
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        auto it = s.find(x);
        auto prevIt = prev(it);
        auto nextIt = next(it);
        int diff = *nextIt - *prevIt;
        mp[diff]--;
        if (mp[diff] == 0)
        {
            mp.erase(diff);
        }
        mp[x - *prevIt]++;
        mp[*nextIt - x]++;
        auto max = mp.rbegin();
        ans.push_back(max->first);
    }
    int sz = ans.size();
    for (int i = 0; i < sz; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}