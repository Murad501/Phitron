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
        int n, q;
        cin >> n >> q;
        vector<ll> a, x;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            a.push_back(val);
        }

        for (int i = 0; i < q; i++)
        {
            ll val;
            cin >> val;
            x.push_back(val);
        }


        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % (1 << x[i]) == 0)
                {
                    a[j] += (1 << (x[i] - 1));
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}