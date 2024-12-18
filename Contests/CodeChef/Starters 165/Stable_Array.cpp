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

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int ans = 0;
        int maxV = v[n - 1];
        int r = n - 2;
        while (r >= 0)
        {
            int count = 0;
            while (v[r] < maxV && r >= 0)
            {
                count++;
                r--;
            }
            if (count > ans)
            {
                ans = count;
            }
            if (v[r] > maxV)
            {
                maxV = v[r];
            }
            r--;
        }
        cout << ans << nl;
    }
    return 0;
}