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
        int sz = (n * (n - 1)) / 2;
        map<int, int> mp;
        for (int i = 0; i < sz; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        multiset<int> mt;
        int s = n - 1;
        int maxV = 0;
        for (auto [key, value] : mp)
        {
            int x = value;
            maxV = max(maxV, key);
            if (x == s)
            {
                mt.insert(key);
                s--;
            }
            else
            {

                while (x > s)
                {
                    x -= s;
                    s--;
                    mt.insert(key);
                }
                if (x == s)
                {
                    mt.insert(key);
                    s--;
                }
            }
        }

        mt.insert(maxV);

        for (auto it : mt)
        {
            cout << it << " ";
        }

        cout << nl;
    }
    return 0;
}