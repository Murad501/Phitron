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
    string s;
    cin >> s;
    map<char, int> mp, temp, ans;
    for (auto x : s)
    {
        mp[x]++;
    }

    for (auto [key, value] : mp)
    {
        if (key == 'L' || key == 'R')
        {
            if (key == 'L')
            {

                temp['L'] = min(mp['L'], mp['R']);
            }
            else
            {

                temp['R'] = min(mp['L'], mp['R']);
            }
        }
        else
        {
            if (key == 'U')
            {

                temp['U'] = min(mp['U'], mp['D']);
            }
            else
            {

                temp['D'] = min(mp['U'], mp['D']);
            }
        }
    }
    for (auto [key, value] : temp)
    {
        if (value > 0)
        {
            ans[key] = value;
        }
    }
    if (ans.size() == 2)
    {
        for (auto [key, value] : ans)
        {
            ans[key] = 1;
        }
    }
    string str_L, str_R, str_U, str_D;

    for (auto [key, value] : ans)
    {

        if (key == 'L' || key == 'R')
        {
            if (key == 'L')
            {
                for (int i = 0; i < value; i++)
                {
                    str_L.push_back('L');
                }
            }
            else
            {
                for (int i = 0; i < value; i++)
                {
                    str_R.push_back('R');
                }
            }
        }
        else
        {
            if (key == 'U')
            {
                for (int i = 0; i < value; i++)
                {
                    str_U.push_back('U');
                }
            }
            else
            {
                for (int i = 0; i < value; i++)
                {
                    str_D.push_back('D');
                }
            }
        }
    }
    int sz = str_L.size() + str_R.size() + str_D.size() + str_U.size();
    cout << sz << nl;
    cout << str_L << str_U << str_R << str_D << nl;
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