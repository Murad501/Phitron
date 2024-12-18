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
        ll sum = 0, zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x == 0)
                zero++;
            else if (x == 1)
                one++;
            v.push_back(x);
        }

        ll ans = 0;

        if (sum == 1)
        {

            ans = (1LL << zero);
        }
        else if (sum > 1)
        {
            ans = (1LL << zero) * one;
        }

        cout << ans << nl;
    }
    return 0;
}