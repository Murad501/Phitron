// 23/09/2025 19:47
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
    string s;
    cin>>s;
    string t = "hello";
    int curr = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
         if(s[i] == t[curr]){
            curr++;
         }
         if(curr == 5){
            break;
         }
    }
    if(curr == 5){
        yes;
    }else{
        no;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}