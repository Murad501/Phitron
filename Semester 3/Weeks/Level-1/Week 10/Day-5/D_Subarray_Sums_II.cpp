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
    int n, k;
    cin >> n >> k;
    vector<ll> preSum,v;
    map<ll, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (i == 0)
        {
            preSum.push_back(x);
        }
        else
        {
            preSum.push_back(preSum[i - 1] + x);
        }
    }

    int l = 1;
    int count = 0;
    while (l < n)
    {
        while (preSum[l] == preSum[l - 1] && l < n)
        {
            count++;
            l++;
        }
        if (count > 0)
        {
            mp[preSum[l - 1]].push_back(count);
            count = 0;
        }
        else
        {
            mp[preSum[l - 1]].push_back(1);
            l++;
        }
    }

    for (int i = 0; i < n; i++)
    {
         cout<<preSum[i]<<" ";
    }
    cout<<nl;

    for(auto[key, value]:mp){
        cout << key << " : ";
        for(int x:value){
            cout << x << " ";
        }
        cout << nl;
    }

    ll ans = 0;
    set<ll> uniques;
    for (int i = 0; i < n; i++)
    {
        ll dif = preSum[i] - k;
        auto it = mp.find(dif);

        if (it != mp.end())
        {
            auto it2 = uniques.find(dif);
            if (it2 == uniques.end())
            {
                vector<int> counts = it->second;
                for (int c : counts)
                {
                    ans += 1LL * (c * (c + 1)) / 2;
                }
                uniques.insert(dif);
            }
        }
        else if (dif == 0)
        {
            ans++;
            uniques.insert(dif);
        }
    }

    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}