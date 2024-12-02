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

        map<int, int> multiple, single, mp;
        set<int> alice, bob;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        for (auto [key, value] : mp)
        {
            if (value > 1)
            {
                multiple[key] = value;
            }
            else
            {
                single[key] = value;
            }
        }

        bool isAlice = true;
        for (auto [key, value] : single)
        {
            if (isAlice)
            {
                alice.insert(key);
            }
            else
            {
                bob.insert(key);
            }
            isAlice = !isAlice;
        }

        for (auto [key, value] : multiple)
        {
            alice.insert(key);
        }

        int ans = 0;

        for (auto val : alice)
        {
            auto it = single.find(val);
            if (it != single.end())
            {
                ans += 2;
            }
            else
            {
                ans++;
            }
        }

        cout << ans << nl;
    }
    return 0;
}