// 07/05/2025 20:43
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
    if (k < n - 1)
    {
        minus;
    }
    else
    {
        vector<int> ans;
        // set<int> s;
        int last = (k - (n - 2));
        // s.insert(last * 2);
        // s.insert(last);
        ans.push_back(last * 2);
        ans.push_back(last);
 
        

        int start = 1;

        for (int i = 0; i < n - 2; i++)
        {
            while(start == last || start == (last * 2)){
                start+=2;
            }
            ans.push_back(start);
            start+=2;
        }
        for (int i = 0; i < n; i++)
        {
             cout<<ans[i]<<" ";
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