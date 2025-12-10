// 22/10/2025 21:01
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    string s;
    cin>>s;
    int a = 0, b = 0;
    for (int i = 0; i < n-1; i++)
    {
         if(s[i] != s[i+1]){
            if(s[i] == '1'){
                a++;
            }else{
                b++;
            }
         }
    }
    if(a == b && a > 0){
        cout<<"Alice"<<nl;
    }else{
        if(a == 0 || b == 0){
            cout<<"Bob"<<nl;
        }else{
            cout<<"Alice"<<nl;
        }
    }
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