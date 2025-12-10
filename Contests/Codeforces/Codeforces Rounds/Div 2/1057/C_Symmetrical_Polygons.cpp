// 10/10/2025 21:39
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> ods;
    vector<int> evens;
    int sum = 0;
    for (auto [key, value] : mp)
    {
        if (value & 1)
        {
            for (int i = 0; i < value - 1; i++)
            {
                evens.push_back(key);
            }
            ods.push_back(key);
            sum += (key * (value - 1));
        }
        else
        {
            for (int i = 0; i < value; i++)
            {
                evens.push_back(key);
            }
            sum += (key * value);
        }
    }

    if (evens.size() < 2)
    {
        zero;
    }
    else
    {
        if (ods.size() == 0)
        {
            cout << sum << nl;
        }
        else
        {
            sort(rall(ods));
            int sz = ods.size();
            int ans = sum;
            bool ok = false;
            for (int i = 0; i < sz; i++)
            {
                if (ods[i] < sum)
                {
                    ans += ods[i];
                    ok = true;
                    break;
                }
            }

            for (int i = 0; i < sz - 1; i++)
            {
                if (ods[i] < (sum + ods[i + 1]))
                {
                    sum += (ods[i] + ods[i + 1]);
                    ok = true;
                    break;
                }
            }
            if (ok)
            {

                cout << max({ans, sum}) << nl;
            }
            else
            {
                if (evens.size() > 2)
                {
                    cout << sum << nl;
                }
                else
                {
                    zero;
                }
            }
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