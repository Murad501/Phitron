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
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    int idx = n;
    for (auto it : s)
    {
        mp[it] = idx;
        idx--;
    }
    for (int i = 0; i < n; i++)
    {
        int id = mp[v[i]];
        v[i] = id;
    }

    int count = 0;
    int l = 0;
    while (l < n - 1)
    {
        count++;
        while (abs(v[l] - v[l + 1]) == 1 && l < n - 1)
        {
            l++;
        }
        l++;
    }
    if (abs(v[n - 1] - v[n - 2]) != 1)
    {
        count++;
    }

    cout << count << nl;
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