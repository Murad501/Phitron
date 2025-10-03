// 26/09/2025 15:17
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
    string s;
    cin >> s;
    vector<int> v;
    int mn = 0, mx = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            v.push_back(mn);
            mn++;
        }
        else
        {
            v.push_back(mx);
            mx--;
        }
    }

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if (s[i] == '0')
            {
                if (v[i] > v[0])
                {
                    ok = false;
                }
            }
            else
            {
                if (v[i] < v[0])
                {
                    ok = false;
                }
            }
        }
        else
        {
            if (s[i] == '0')
            {
                if (v[i] > v[i + 1])
                {
                    ok = false;
                }
            }
            else
            {
                if (v[i] < v[i + 1])
                {
                    ok = false;
                }
            }
        }
    }

    if(ok){
        for (int i = 0; i < n; i++)
        {
             cout<<v[i]<<" ";
        }
        cout<<nl;
    }else{
        minus;
    }
}

int32_t main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}