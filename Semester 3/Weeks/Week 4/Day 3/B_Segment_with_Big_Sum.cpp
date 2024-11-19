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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = -1, l = 0, r = 0;
    ll sum = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {

            while (sum >= s)
            {
                sum -= v[l];
                if (ans == -1)
                {
                    ans = r - l + 1;
                }
                else
                {
                    ans = min(ans, r - l + 1);
                }
                l++;
            }
        }

        r++;
    }

    cout << ans << nl;

    return 0;
}