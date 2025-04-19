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
    vector<int> v;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        ans = max(ans, x);
    }
    if (n == 1)
    {

        cout << ans << nl;
    }
    else
    {
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && v[i] == ans)
            {
                flag = true;
                break;
            }
        }
        ans += (n - 1) / 2;
        if (!flag)
        {
            ans--;
        }
        cout << ans << nl;
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