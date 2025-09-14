// 13/08/2025 12:04
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
    string s;
    cin >> s;
    vector<int> v;
    int ans = 2;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {

        if (s[i] == s[i - 1])
        {
            cnt++;
            ans = max(ans, cnt + 1);
        }
        else
        {
            cnt = 1;
            ans = max(ans, cnt + 1);
        }
    }
    

    cout << ans << nl;
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