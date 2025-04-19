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
        map<int, set<int>> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        map<int, int> dif;
        for (auto [key, value] : mp)
        {
            int first = *value.begin();
            int last = *value.rbegin();
            int prev = -1;
            int maxDif = 0;
            for (int val : value)
            {
                if (prev == -1)
                {
                    if (first == last)
                    {
                        maxDif = max(val, n - 1 - val);
                    }
                    else
                    {
                        // cout << val << nl;
                        maxDif = val;
                        prev = val;
                    }
                }
                else
                {
                    int withPrev = (val - 1 - prev) / 2;
                    if ((val - 1 - prev) % 2 != 0)
                    {
                        withPrev++;
                    }

                    if (val == last)
                    {
                        maxDif = max(maxDif, max(withPrev, n - 1 - val));
                    }
                    else
                    {
                        maxDif = max(maxDif, withPrev);
                        prev = val;
                    }
                }
            }
            dif[key] = maxDif;
        }

        int ansK;
        int ansV = INT_MAX;

        for (auto [key, value] : dif)
        {
            if (value < ansV)
            {
                ansK = key;
                ansV = value;
            }
        }
        cout << ansK << " " << ansV << nl;
    }
    return 0;
}