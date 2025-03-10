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
    vector<int> dp(4, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x == 1){
           dp[1]++; 
        }
        else if(x == 2){
            dp[2] = dp[1] + dp[2];
        }
        else {
            dp[3] = max(dp[2], dp[3]) + dp[3];
        }
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