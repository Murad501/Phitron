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
        int allMax = 0;
        vector<string> str;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            int maxBit = __lg(x);
            allMax = max(allMax, maxBit);
        }

        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            int maxBit = __lg(x);
            string s;

            for (int j = 0; j <= maxBit; j++)
            {
                if ((x >> j) & 1 == 1)
                {
                    s.push_back('1');
                }
                else
                {
                    s.push_back('0');
                }
            }
            for (int j = 0; j < allMax - maxBit; j++)
            {
                s.push_back('0');
            }
            str.push_back(s);
        }

        int ans = 0;
        for (int i = 0; i < str[0].size(); i++)
        {
            bool ok = true;
            for (int j = 0; j < n; j++)
            {
                if (str[j][i] == '0')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                ans += (1 << i);
            }
        }
        cout << ans << nl;
    }

    return 0;
}