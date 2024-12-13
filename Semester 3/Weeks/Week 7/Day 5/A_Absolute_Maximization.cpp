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
        int maxV = 0, minV = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            int maxBit = __lg(x);
            for (int j = 0; j <= maxBit; j++)
            {
                if ((x >> j) & 1 == 1)
                {
                    mp[j]++;
                }
            }
        }

        for (auto [key, value] : mp)
        {
            maxV += pow(2, key);
            minV += pow(2, key);
            if (value < n)
            {
                minV -= pow(2, key);
            }
        }
        cout << maxV - minV << nl;
    }
    return 0;
}