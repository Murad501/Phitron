// 24/04/2025 21:19
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
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        mp[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    int ignoreCnt = 0;
    int j = 0;
    int ignoreVal = -1;
    for (int i = 0; i < n; i++)
    {
        if (j == m || (ignoreCnt > 0 && j == (m - 1)))
        {
            break;
        }
        if (a[i] >= b[j])
        {
            j++;
            mp[a[i]]--;
        }
        else
        {
            if (j < m - 1 && a[i] >= b[j + 1] && ignoreCnt == 0)
            {
                // cout<<"ignore "<<b[j]<<nl;
                ignoreCnt++;
                ignoreVal = b[j];
                j++;
            }
        }
    }
    if (j == (m - 1) && ignoreCnt == 0)
    {
        ignoreVal = b[j];
    }
    // cout<<j<<" "<<m<<" "<<ignoreVal<<nl;
    if (j < m - 1)
    {
        minus;
    }
    else if (j < m)
    {
        cout << ignoreVal << nl;
    }
    else
    {
        zero;
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