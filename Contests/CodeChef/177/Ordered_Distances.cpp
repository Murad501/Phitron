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
    vector<int> x, y;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        x.push_back(val);
    }
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        y.push_back(val);
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        vector<pair<int, int>> pr;
        for (int j = 0; j < n; j++)
        {
            pr.push_back({abs(x[j] - x[i]), x[j]});
        }
        sort(all(pr));
        bool ok = true;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {

            temp.push_back(pr[i].second);
        }
        for (int i = 0; i < n; i++)
        {
            if (temp[i] != y[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << nl;
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