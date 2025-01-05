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
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[i] = x;
        }

        bool found = false;
        for (auto [key, value] : mp)
        {
            int val = mp[value];
            if (val == key)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << 2 << nl;
        }
        else
        {
            cout << 3 << nl;
        }
    }
    return 0;
}