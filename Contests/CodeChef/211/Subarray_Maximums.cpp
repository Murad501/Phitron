// 05/11/2025 20:46
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
    bool ok = true;
    if(s[0] == '0' || s[n-1] == '0'){
        minus;
    }else{
        
        vector<int>on, ze;
        for (int i = 0; i < n; i++)
        {
             if(s[i] == '0'){
                ze.push_back(i+1);
             }else{
                on.push_back(i+1);
             }
        }
        cout<<on[0]<<" ";
        int prev = on[0];
        int cnt = 1;
        int l = 1, r = 0;
        int sz = ze.size(), sn = on.size();
        while (cnt < n)
        {
            if(r < sz){
                if(ze[r] > prev){
                    cout<<on[l]<<" ";
                    prev = on[l];
                    l++;
                }else{
                    cout<<ze[r]<<" ";
                    r++;
                }
            }else{
                cout<<on[l]<<" ";
                l++;
            }
            cnt++;
        }
        cout<<nl;
        
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