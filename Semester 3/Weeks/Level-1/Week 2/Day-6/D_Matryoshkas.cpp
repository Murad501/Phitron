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
        map<int, int> values;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            values[x]++;
        }

        multiset<int> items;
        for (auto [key, value] : values)
        {
            for (int i = 0; i < value; i++)
            {
                auto it = items.find(key - 1);
                if (it != items.end())
                {
                    items.erase(it);
                    items.insert(key);
                }
                else
                {
                    items.insert(key);
                }
            }
        }

        cout << items.size() << nl;
    }

    return 0;
}