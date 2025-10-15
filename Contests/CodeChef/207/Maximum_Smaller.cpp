// 08/10/2025 20:36
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
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
    multimap<int, int> mp;
    vector<int> v;
    set<int> used;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp.insert({x, i});
        v.push_back(x);
    }
    vector<int> rem;
    int id = 1, i = 0;
    while (id < n)
    {
        auto it = mp.find(v[id]);
    }

    for(auto[key, value]:mp){
        cout<<key<<" "<<value<<nl;
    }
    cout<<nl;
    
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