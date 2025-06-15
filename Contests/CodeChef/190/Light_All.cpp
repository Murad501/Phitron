// 11/06/2025 20:34
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
    bool ok = true;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            bool flag = false;
            if (i == 0)
            {
                if (n == 1)
                {
                    ok = false;
                }
                else
                {
                    if (s[i + 1] != '1')
                    {
                        ok = false;
                        break;
                    }
                    else
                    {
                        idx = i + 1;
                    }
                }
            }
            else if (i == (n - 1))
            {

                if (s[i - 1] != '1')
                {
                    ok = false;
                    break;
                }
                else
                {
                    if ((i - 1) == idx)
                    {
                        ok = false;
                        break;
                    }
                    else
                    {

                        idx = i - 1;
                    }
                }
            }
            else
            {
                if (s[i - 1] == '1')
                {
                    if ((i - 1) == idx)
                    {
                        if (s[i + 1] == '1')
                        {
                            idx = i + 1;
                        }
                        else
                        {
                            ok = false;
                            break;
                        }
                    }
                    else
                    {
                        idx = i - 1;
                    }
                }
                else if (s[i + 1] == '1')
                {
                    idx = i + 1;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
    }

    if(ok){
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