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
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int discount = 0;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            if (val > 0 && discount < val)
            {

                ans += (val - discount);
            }
            discount++;
        }
        cout << ans << nl;
    }
    return 0;
}