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
        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0, r = 0, ans = 0;
        ll sum = 0;
        while (r < n)
        {

            if (a[r] <= k)
            {
                if (sum == 0)
                {
                    sum = a[r];
                    ans = max(ans, r - l + 1);
                }
                else
                {
                    sum += a[r];
                    if (h[r - 1] % h[r] == 0)
                    {
                        if (sum <= k)
                        {
                            ans = max(ans, r - l + 1);
                        }
                        else
                        {
                            while (sum > k && l < r)
                            {
                                sum -= a[l];
                                l++;
                            }
                            ans = max(ans, r - l + 1);
                        }
                    }
                    else
                    {
                        sum = a[r];
                        ans = max(ans, r - l + 1);
                    }
                }
            }
            else
            {
                l = r + 1;
                sum = 0;
            }
            r++;
        }

        cout << ans << nl;
    }
    return 0;
}