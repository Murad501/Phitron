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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i + 1;
    }

    set<int> ans;
    vector<int> available;
    sort(available.begin(), available.end());

    auto it = mp.begin();
    if (it->second == 1 || it->second == n)
    {

        ans.insert(it->second);
    }
    else
    {
        no;
        return;
    }
    it++;
    if (it->second == 1 || it->second == n)
    {

        ans.insert(it->second);
    }
    else
    {
        no;
        return;
    }
    if (n == 2)
    {
        yes;
        return;
    }
    available.push_back(n - 2);

    bool ok = true;
    for (auto [key, value] : mp)
    {
        if (key == 1 || key == 2 || key == n)
        {
            continue;
        }
        ans.insert(value);

        auto keyIt = ans.find(value);
        auto nextV = ans.find(value);
        auto prevV = ans.find(value);
        nextV++;
        prevV--;

        int diffVal = (available[available.size() - 1]);
        int diffNeed = diffVal / 2;
        if (diffVal % 2 == 1)
        {
            diffNeed++;
        }
        int preVDiff = abs(value - *prevV);
        int nextVDiff = abs(*nextV - value);
        int curr = min(preVDiff, nextVDiff);

        // for (int i = 0; i < available.size(); i++)
        // {
        //     cout << available[i] << " ";
        // }
        // cout << nl;
        if (curr < diffNeed)
        {
            ok = false;
            break;
        }
        else
        {
            available.pop_back();
            
            available.push_back(diffNeed);

            if ((diffVal - 1) % 2 == 1)
            {
                diffNeed++;
            }
            available.push_back(diffNeed);
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