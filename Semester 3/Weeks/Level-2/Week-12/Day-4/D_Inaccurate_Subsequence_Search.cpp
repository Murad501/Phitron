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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    
    for (int i = 0; i < n; i++)
    {
         cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
         cin>>b[i];
    }

    for (int i = 0; i < n; i++)
    {
         cout<<a[i]<<" ";
    }
    cout<<nl;
    for (int i = 0; i < m; i++)
    {
         cout<<b[i]<<" ";
    }
    cout<<nl<<nl;;
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