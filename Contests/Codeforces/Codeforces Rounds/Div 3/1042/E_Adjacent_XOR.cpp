// 10/08/2025 21:36
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
    vector<bitset<4>> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        //  bitset<4> s(x);
        //  cout<<s<<nl;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    bool ok = true;
    bitset<4> curr = a[0];
    for (int i = 0; i < n; i++)
    {
        if (curr != a[i])
        {
            curr = curr ^ b[i];
        }

        else if (a[i] != b[i])
        {
            curr = curr ^ b[i];
        }
        else
        {
            
        }

        if(i == n-1){
            if(curr != a[i] || a[i] != b[i]){
                ok = false;
            }
        }
    }

    if (ok)
    {
        yes;
    }
    else
    {
        no;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << nl;
    cout << nl;
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