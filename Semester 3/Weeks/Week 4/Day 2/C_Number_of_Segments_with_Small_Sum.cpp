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
    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > s)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout << ans << nl;
    return 0;
}