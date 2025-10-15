// 07/10/2025 20:58
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
    string s;
    cin>>s;
    set<char>st;
    for (int i = 0; i < n; i++)
    {
         if(s[i]> 'Z'){
            st.insert(s[i] - 32);
         }else{
            st.insert(s[i]);
         }
    }
    if(st.size() == 26){
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