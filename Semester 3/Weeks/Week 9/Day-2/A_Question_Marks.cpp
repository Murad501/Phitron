#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define ll long long int

#define MuRAD_BOOST()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    MuRAD_BOOST();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sz = s.size();
        map<char, int> mp;
        for (int i = 0; i < sz; i++)
        {
            if (s[i] != '?')
            {
                mp[s[i]]++;
            }
        }
        int ans = 0;
        for (auto [key, value] : mp)
        {
            if (value < n)
            {
                ans += value;
            }
            else
            {

                ans += n;
            }
        }
        cout << ans << nl;
    }

    return 0;
}