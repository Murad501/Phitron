// 13/04/2025 22:00
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
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> ans((n * 2) + 2);
    vector<int> s;
    for (int i = 0; i < (n * 2) + 2; i++)
    {
        ans[i] = 0;
    }

    // for (int i = 0; i < n*2; i++)
    // {
    //      cout<<ans[i]<<" ";
    // }
    // cout<<nl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int val = arr[i][j];

            int sum = (i + j) + 2;
            if (ans[i + j + 2] == 0)
            {
                ans[i + j + 2] = val;
                s.push_back(val);
            }
        }
    }

    int sz = s.size();
    int curr = 1;
    sort(all(s));
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == curr)
        {
            curr++;
        }
        else
        {
            break;
        }
    }
    cout << curr << " ";

    for (int i = 2; i <= n * 2; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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