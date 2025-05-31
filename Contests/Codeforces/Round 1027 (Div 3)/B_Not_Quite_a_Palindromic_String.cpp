// 26/05/2025 20:42
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int zeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zeros++;
        }
    }
    int ones = n - zeros;
    int mn = min(zeros, ones);
    int mx = max(zeros, ones);
    int available = mx - mn;
    
    set<int>ans;
    ans.insert(available/2);
    if(ones % 2 == 1){
        mn--;
        mx--;
    }

    while (mn)
    {
        ans.insert((mn+mx)/2);
        mn-=2;
        mx-=2;
    }
    if(ans.count(k)){
        yes;
    }else{
        no;
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