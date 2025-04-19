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
    int n, k;
    cin >> n >> k;

    bool ok = true;

    if (n - 1 <= k)
    {
        minus;
    }
    else
    {
        queue<int>q;
        for (int i = 6; i >= 1; i--)
        {
            q.push(i);
        }
        
        int curr = -1;
        int idx = 1;
        while(!q.empty()){
            int val = q.front();
            if(val == curr){
                break;
            }

            if(val % k == idx && )

            q.pop();
            cout<<val<<" ";
        }
        cout<<nl;
    }
}

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}