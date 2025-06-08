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
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        int m = a[n - 1], s = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > b[i + 1])
            {
                m += a[i];
                s += b[i + 1];
            }
        }
        cout << m - s << nl;
    }
    return 0;
}