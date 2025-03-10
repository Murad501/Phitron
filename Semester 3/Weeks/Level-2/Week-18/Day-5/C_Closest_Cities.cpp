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
    int n, m;
    cin >> n;
    vector<ll> v(n+1, 0);
    vector<ll> go(n+1, 0);
    vector<ll> backItem(n+1, 0);

    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            go[i] = 1;
        }
        else
        {
            if (i < n - 1)
            {
                ll left = abs(v[i - 1] - v[i]);
                ll right = abs(v[i] - v[i + 1]);
                if (left > right)
                {
                    go[i] = go[i - 1] + 1;
                }
                else
                {
                    go[i] = go[i - 1] + right;
                }
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {

        if (i == n - 1)
        {

            backItem[i] = 1;
        }
        else
        {
            if (i > 0)
            {
                int left = abs(v[i - 1] - v[i]);
                int right = abs(v[i] - v[i + 1]);
                if (left > right)
                {
                    backItem[i] = backItem[i + 1] + left;
                }
                else
                {
                    backItem[i] = backItem[i + 1] + 1;
                }
            }
        }
    }



    for (int i = 0; i <= n; i++)
    {
        cout << go[i] << " ";
    }
    cout << nl;
    for (int i = 0; i <= n; i++)
    {
        cout << backItem[i] << " ";
    }
    cout << nl << nl;

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        if(y < x){
            cout<<x<<" "<<y<<nl;
            cout<<backItem[y] - backItem[x]<<nl;
        }else{
            // cout<<go[x]<<" "<< go[y]<<nl;
            // cout<<go[y-1] - go[x-1]<<nl;
        }
        
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