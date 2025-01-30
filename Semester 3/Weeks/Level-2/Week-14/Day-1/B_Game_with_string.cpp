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
    string t;
    t.push_back(s[0]);
    int cnt = 0;
    int n = s.size();
    int l = 1;
    while (l < n)
    {
        if (t.size())
        {
            if (t[t.size() - 1] == s[l])
            {
                t.pop_back();
                cnt++;
            }
            else
            {
                t.push_back(s[l]);
            }
        }
        else
        {
            t.push_back(s[l]);
        }
        l++;
    }
    if (cnt % 2 == 1)
    {
        cyes;
    }
    else
    {
        cno;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}