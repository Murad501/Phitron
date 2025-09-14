// 05/05/2025 20:41
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
    map<int, int> mp;
    int maxVal = INT_MIN, minVal = INT_MAX, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        maxVal = max(maxVal, x);
        minVal = min(minVal, x);
        sum += x;
    }
    int diff = maxVal - minVal;
    if (diff > k)
    {
        
        mp[maxVal]--;
        if (mp[maxVal] == 0)
        {
            mp.erase(maxVal);
        }
        mp[maxVal-1]++;
        diff = mp.rbegin()->first - mp.begin()->first;
        if (diff > k)
        {
            cout << "Jerry" << nl;
        }
        else
        {
            if (sum % 2 == 0)
            {
                cout << "Jerry" << nl;
            }
            else
            {
                cout << "Tom" << nl;
            }
        }
    }
    else
    {
        if (sum % 2 == 0)
        {
            cout << "Jerry" << nl;
        }
        else
        {
            cout << "Tom" << nl;
        }
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