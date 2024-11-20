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
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (s > sum)
        {
            cout << -1 << nl;
        }
        else if (s == sum)
        {
            cout << 0 << nl;
        }
        else
        {

            int ans = n, sum = 0;
            int l = 0, r = 0;

            while (r < n)
            {
                sum += a[r];
                if (sum == s)
                {
                    ans = min(ans, n - (r - l + 1));
                }

                while (sum > s)
                {
                    sum -= a[l];
                    l++;
                }

                r++;
            }
            cout << ans << nl;
        }
    }
    return 0;
}