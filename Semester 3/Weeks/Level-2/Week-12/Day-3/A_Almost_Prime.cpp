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
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        int x = i;
        map<int, int>mp;
        for (int j = 2; j * j <= n; j++)
        {
            while (x % j == 0)
            {
                x /= j;
                mp[j]++;
            }
        
            
        }
        if(x > 1){
            mp[x]++;
        }
        if(mp.size() == 2){
            ans++;
       
        }

    }
    cout << ans << nl;
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}