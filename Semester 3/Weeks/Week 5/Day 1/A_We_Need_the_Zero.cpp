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
        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            XOR ^= x;
        }

        int ans = XOR;
        if (XOR > 0)
        {
            vector<int> y;
            for (int i = 0; i < n; i++)
            {
                y.push_back(XOR ^ v[i]);
            }

            int tempX = 0;
            for (int i = 0; i < n; i++)
            {
                tempX ^= y[i];
            }
            if (tempX != 0)
            {
                ans = -1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}