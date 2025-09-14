// 28/08/2025 20:48
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

    map<int, bool> mp;
    int cnt = 0;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        else
        {
            if (s[i] == '1')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
        }
        if (cnt == k)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        yes;
        int mx = n, mn = 1;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1'){
                cout<<mn<<" ";
                mn++;
            }else{
                cout<<mx<<" ";
                mx--;
            }
        }
        cout << nl;
    }
    else
    {
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