// 08/09/2025 20:49
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
    int k, x;
    cin >> k >> x;
    int van = pow(2, k);
    int cho = van;
    if (cho == x)
    {
        zero;
        cout << nl;
    }
    else
    {
        vector<int> ans;
        set<int> temp;
        int tm = min(x, (van + van) - x);
        while (tm  <= (van + van))
        {
            temp.insert(tm);
            tm *= 2;
        
        }
        for (auto key : temp)
        {
            cout << key << " ";
        }
        cout << nl;
        // cout<<temp.size()<<nl;
        int val = van, val2 = van;
        while (!temp.count(val))
        {
            val += (val2 / 2);
            val2 /= 2;
            ans.push_back(2);
        }

        tm = min(x, (van + van) - x);
        while (val != tm)
        {
            if (ans.size() == 120)
            {
                break;
            }
            ans.push_back(1);
            val /= 2;
        }

        int mn = min(x, (van + van) - x);
        bool isReverse = false;
        if (mn != x)
        {
            isReverse = true;
        }
        cout << ans.size() << nl;
        int m = ans.size();
        for (int i = 0; i < m; i++)
        {
            if (isReverse)
            {
                if (ans[i] == 1)
                {
                    cout << 2 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            else
            {
                cout << ans[i] << " ";
            }
        }
        cout << nl;
    }
    // cout << van << " " << cho << nl;
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