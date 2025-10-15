// 08/10/2025 19:40
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
    set<int>ans;
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
         int x;
         cin>>x;
         ans.insert(x);
    }
    int b;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
         int x;
         cin>>x;
         ans.insert(x);
    }

    if(ans.size() == n){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}