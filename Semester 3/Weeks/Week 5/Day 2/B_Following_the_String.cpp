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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        map<int, char> mp;
        string ans;
        for (int i = 0; i < n; i++)
        {
            auto it = mp.find(v[i]);
            if (it != mp.end())
            {
                ans.push_back(it->second + 1);
                mp[v[i]] = mp[v[i]] + 1;
            }
            else
            {
                mp[v[i]] = 'a';
                ans.push_back('a');
            }
        }
        cout << ans << nl;
    }
    return 0;
}