// 19/05/2025 00:14
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
    int n, m, k;
    cin>>n>>m>>k;
    vector<int>a, b;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
         int x;
         cin>>x;
         b.push_back(x);
    }

    sort(all(a));
    sort(all(b));
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if(abs(a[i] - b[j]) <= k){
            ans++;
            i++;
            j++;
        }else if(b[j] > a[i]){
            i++;
        }else{
            j++;
        }
    }
    cout<<ans<<nl;
    
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}