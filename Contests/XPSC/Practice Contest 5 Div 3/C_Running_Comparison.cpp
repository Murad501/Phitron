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

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            int y = b[i];
            ll x1 = x*2;
            ll y1 = y*2;
            if (x > y1 || y > x1)
            {
                continue;
            }
            count++;
        }
        cout << count << nl;
    }
    return 0;
}