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
    map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    string first, last, middle;
    int oddCount = 0;
    bool ok = true;
    for (auto [key, value] : mp)
    {
        if (value % 2 == 1)
        {
            oddCount++;
            if (oddCount > 1)
            {
                ok = false;
                break;
            }
            for (int i = 0; i < value; i++)
            {
                middle.push_back(key);
            }
            continue;
        }
        for (size_t i = 0; i < value / 2; i++)
        {
            first.push_back(key);
            last.push_back(key);
        }
    }

    if (!ok)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        reverse(first.begin(), first.end());
        cout << first << middle << last << nl;
    }
}

int main()
{
    MuRAD_BOOST();
    solve();

    return 0;
}