// 05/10/2025 23:11
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
    vector<int> v;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        mp[x].push_back(i);
    }

    if (n == 1)
    {
        cout << 2 << nl;
        return;
    }

    string s;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            s.push_back('R');
            s.push_back('L');
            i++;
        }
        else if (v[i] < v[i + 1])
        {
            s.push_back('R');
        }
        else
        {
            s.push_back('L');
        }
    }

    if (v[n - 1] == v[n - 2])
    {
        s.push_back('R');
    }
    else if (v[n - 2] < v[n - 1])
    {
        s.push_back('R');
    }
    else
    {
        s.push_back('L');
    }

    int r = 0, l = 0;
    vector<int> vL, vR;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r++;
        }
        vR.push_back(r);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        vL.push_back(l);
    }

    bool ok = true;
    // cout << s << nl;
    reverse(all(vL));
    for (int i = 0; i < n; i++)
    {
        int sum = vR[i] + vL[i];
        // cout << "sum " << sum << " ";
        if (sum != v[i])
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        bool ok2 = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                s[i] = 'L';
            }
            else
            {
                s[i] = 'R';
            }
        }
        // cout<<s<<nl;
        r = 0, l = 0;
        vector<int> vL, vR;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                r++;
            }
            vR.push_back(r);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'L')
            {
                l++;
            }
            vL.push_back(l);
        }
        reverse(all(vL));
        for (int i = 0; i < n; i++)
        {
            int sum = vR[i] + vL[i];
            // cout << "sum " << sum << " ";
            if (sum != v[i])
            {
                ok2 = false;
                break;
            }
        }

        if (ok2)
        {
            cout << 2 << nl;
        }
        else
        {
            cout << 1 << nl;
        }
    }
    else
    {
        zero;
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