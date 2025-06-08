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
        int k;
        cin >> k;
        map<int, int> mp;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int n = 0, m = 0;
        int total = k - 2;

        for (auto [key, value] : mp)
        {
            if (total % key == 0)
            {
                int second = total / key;
                if (second == key)
                {
                    if (value > 1)
                    {
                        n = key;
                        m = second;

                        break;
                    }
                }
                else
                {
                    auto it = mp.find(second);
                    if (it != mp.end())
                    {
                        n = key;
                        m = it->first;

                        break;
                    }
                }
            }
        }
        cout << n << " " << m << nl;
    }
    return 0;
}