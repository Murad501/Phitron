// 28/04/2025 22:24
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < k; i++)
    {
        string t;
        cin >> t;
        map<char, int> tp;
        int sz = t.size();
        for (int j = 0; j < sz; j++)
        {
            tp[t[j]]++;
        }

        bool ok = true;
        int minNeed = INT_MAX;

        for (auto [key, value] : tp)
        {
            if (value > mp[key])
            {
                ok = false;
                break;
            }
            else
            {
                minNeed = min(mp[key] - value, minNeed);
            }
        }
        if(ok){
            zero;
        }else{
            cout<<minNeed<<nl;
        }

        
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}