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
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    map<int, int> mp;

    while (r < n)
    {
        mp[a[r]]++;
        while (mp.size() > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                mp.erase(a[l]);
            }
            l++;
        }

        if (mp.size() <= k)
        {
            ans += r - l + 1;
        }

        r++;
    }

    cout << ans << nl;
    return 0;
}