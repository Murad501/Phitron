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
    int maxV = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;

        maxV = max(maxV, x);
    }

    auto flag = true;
    for (auto [key, value] : mp)
    {
        if (key == maxV)
        {
            break;
        }
        if (value == 2)
        {
            continue;
        }
        if (value > 2)
        {

            int curr = value;

            while (curr > 2)
            {

                curr--;
                mp[key + 1]++;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cyes;
    }
    else
    {
        cno;
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