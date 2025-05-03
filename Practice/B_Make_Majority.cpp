// 29/04/2025 00:47
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
    string t;

    bool ze = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            t.push_back('1');
            ze = false;
        }
        else
        {
            if (!ze)
            {
                t.push_back('0');
                ze = true;
            }
        }
    }
    string v;
    n = t.size();

    for (int i = 0; i < n; i++)
    {
        
        if(n - i > 2){
            if (t[i] == '1' && t[i + 1] == '0' && t[i + 2] == '1')
            {
                v.push_back('1');
                i += 2;
            }
            else
            {
                v.push_back(t[i]);
            }
        }else{
            v.push_back(t[i]); 
        }
        
    }

    int o = 0, z = 0;
    n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '0')
        {
            z++;
        }
        else
        {
            o++;
        }
    }

    if(o > z){
        cyes;
    }else{
        cno;
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