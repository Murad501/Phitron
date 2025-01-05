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
        int n, c;
        cin >> n >> c;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x + i + 1);
        }

        sort(v.begin(), v.end());

        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum <= c)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << nl;
    }
    return 0;
}