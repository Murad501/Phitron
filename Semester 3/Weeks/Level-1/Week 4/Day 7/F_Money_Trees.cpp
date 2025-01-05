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
        vector<int> a, h;
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
            h.push_back(x);
        }

        int l = 0, r = 0, ans = 0;
        ll sum = 0;
        while (r < n)
        {
            if (a[r] > k)
            {
                l = r + 1;
                sum = 0;
            }
            else
            {
                if (sum == 0)
                {
                    sum += a[r];
                    ans = max(ans, r - l + 1);
                    
                }
                else
                {
                    if (h[r - 1] % h[r] == 0)
                    {
                        sum += a[r];
                        if (sum <= k)
                        {
                            ans = max(ans, r - l + 1);
                           
                        }
                        else
                        {
                            while (sum > k)
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
                        l = r;
                        ans = max(ans, r - l + 1);
                    }
                }
            }

            r++;
        }

        cout << ans << nl;
    }
    return 0;
}