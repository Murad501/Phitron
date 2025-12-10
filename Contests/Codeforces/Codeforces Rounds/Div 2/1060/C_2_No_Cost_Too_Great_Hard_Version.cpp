// 19/10/2025 21:45
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
    int n;
    cin >> n;
    vector<int> a, b;
    unordered_map<int, int> mp;
    set<int>st;
    int even = 0;
    bool ok = false;
    int one = -1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        mp[x]++;
        if (x > 1 && mp[x] > 1)
        {
            ok = true;
        }
        if (x > 1)
        {
            for (int j = 2; j * j <= x; j++)
            {
                if (x % j == 0)
                {
                    int second = x / j;
                    mp[j]++;
                    if (mp[j] > 1)
                    {
                        ok = true;
                    }
                    if (j != second)
                    {
                        mp[second]++;
                        if (mp[second] > 1)
                        {
                            ok = true;
                        }
                    }
                }
            }
        }
    }
    map<int, int>kv;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
        if(kv[x] == 0){
            kv[x] = a[i];
        }else{
            kv[x] = min(a[i], kv[x]);
        }
        
        
    }


    if (ok)
    {
        zero;
    }
    else
    {
        int ans = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            int val = a[i] + 1;
            if (mp[val] == 1)
            {
                ans = min(ans, b[i]);

                break;
            }
            for (int j = 2; j * j <= val; j++)
            {
                if (val % j == 0)
                {
                    int second = val / j;
                    if (mp[j] == 1)
                    {
                        ans = min(ans, b[i]);
                        break;
                    }

                    if (j != second)
                    {

                        if (mp[second] == 1)
                        {
                            ans = min(ans, b[i]);
                            break;
                        }
                    }
                }
            }
        }

        sort(all(b));
        ans = min(ans, b[0] + b[1]);

        int val = kv[b[0]];
        sort(all(a));
        int target = -1;
        auto it = upper_bound(all(a), val);
        if(it != a.end()){
            target = *it;
            // int need = (*it - val) * b[0];
            // ans = min(ans, need);
        }




      
        cout << ans << nl;
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