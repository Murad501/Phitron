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
    map<int, int> mp = {{0, 3}, {2, 2}, {1, 1}, {5, 1}, {3, 1}};
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        if (mp[x] > 0)
        {
            mp[x]--;
        }
        if (mp[x] == 0)
        {
            mp.erase(x);
        }
        cnt++;
        if (mp.size() == 0)
        {
            break;
        }
    }
    if (mp.size() > 0)
    {
        zero;
    }
    else
    {

        cout << cnt << '\n';
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