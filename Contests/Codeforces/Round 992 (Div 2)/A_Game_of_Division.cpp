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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int val = abs(v[i] - v[j]);
                    if (val % k == 0)
                    {

                        flag = false;
                        break;
                    }
                }
            }
            if (flag)
            {
                ans = i;
                break;
            }
        }

        if (ans == -1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
            cout << ans + 1 << nl;
        }
    }

    return 0;
}