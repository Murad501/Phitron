// 20/09/2025 20:46
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
    cin >> n;
    if (n & 1)
    {
        vector<int> ans(n + n);
        int curr = n;
        for (int i = 0; i < n; i++)
        {
            ans[i] = curr;
            if (curr == 1)
            {
                ans[i + 1] = n - 1;
                ans[i + 1 + (n - 1)] = n - 1;
                break;
            }
            else
            {
                ans[i + curr] = curr;
            }
            curr -= 2;
        }
        curr = n - 3;
        for (int i = 0; i < n + n; i++)
        {
            if (ans[i] == 0)
            {
                ans[i] = curr;
                ans[i + curr] = curr;
                curr -= 2;
            }
        }

        ans[n + n - 1] = 1;

        for (int i = 0; i < n + n; i++)
        {

            cout << ans[i] << " ";
        }
        cout << nl;
    }
    else
    {
        vector<int> ans(n + n);
        int curr = n;
        for (int i = 0; i < n; i++)
        {
            ans[i] = curr;
            if (curr == 0)
            {
                ans[i] = n - 1;
                if(n  == 2){
                    break;
                }
                ans[i + (n - 1)] = n - 1;
                break;
            }
            else
            {
                ans[i + curr] = curr;
            }
            curr -= 2;
        }
        
        curr = n - 3;
        for (int i = 0; i < n + n; i++)
        {
            if(curr < 1){
                break;
            }
            
            if (ans[i] == 0)
            {
                // cout << curr << " " << i << nl;
                ans[i] = curr;
                if (curr == 1)
                {
                    break;
                }
                ans[i + curr] = curr;
                curr -= 2;
            }
        }
        ans[n + n - 1] = 1;

        for (int i = 0; i < n + n; i++)
        {

            cout << ans[i] << " ";
        }
        cout << nl;
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