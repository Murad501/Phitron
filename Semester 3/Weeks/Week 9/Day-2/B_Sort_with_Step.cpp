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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            int val = abs(v[i - 1] - i);
            if (val % k != 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << 0 << nl;
        }
        else if (count == 2)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }

    return 0;
}