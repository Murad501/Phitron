// 19/09/2025 17:49
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
    vector<int> v;
    int my = 0, op = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
        {
            op += x;
        }
        else
        {
            my += x;
        }
        v.push_back(x);
    }
    int ans = my - op;
    int curr = n-1;
    if(n % 2==0){
        curr--;
    }
    cout<<ans<<nl;

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