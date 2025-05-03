// 19/04/2025 18:03
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
    cin>>n;
    deque<int>dq;
    for (int i = 0; i < n; i++)
    {
         int x;
         cin>>x;
         if(x == 1){
            int y;
            cin>>y;
            dq.push_back(y);
         }else{
            cout<<dq[0]<<nl;
            dq.pop_front();
         }
    }
    cout<<nl;
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}