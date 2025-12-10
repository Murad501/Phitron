// 29/10/2025 21:56
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
    int curr = 1;
    vector<int> v;
    vector<int> ans;
    for (int i = 1; i <= 18; i++)
    {
        // cout << curr << " ";
        v.push_back(curr);
        if (i > 7)
        {
            ans.push_back(curr);
        }
        curr *= 2;
    }
    for (int i = 0; i < 6; i++)
    {
        v.push_back(ans[i] - 1);
    }

    sort(all(v));
    for (int i = 0; i < 20; i++)
    {
        if (i < 18)
        {

            cout << v[i] << " ";
        }
        else
        {
            cout << curr << " ";
            curr *= 2;
        }
    }

    cout << nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}