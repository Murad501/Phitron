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
        vector<int> evens;
        int even = 0, odd = 0;
        ll maxOdd = 1;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
            {
                even++;
                evens.push_back(x);
            }
            else
            {
                odd++;
                maxOdd = max(maxOdd, x);
            }
        }
        sort(evens.begin(), evens.end());
        vector<int> maxValues;
        int count = 0;

        if (even != 0 && odd != 0)
        {
            int sz = evens.size();
            for (int i = 0; i < sz; i++)
            {
                if (evens[i] < maxOdd)
                {
                    count++;
                    maxOdd += evens[i];
                }
                else
                {
                    maxValues.push_back(evens[i]);
                }
            }

            int mxSize = maxValues.size();
            for (int i = mxSize - 1; i >= 0; i--)
            {
                if (maxValues[i] < maxOdd)
                {
                    count++;
                    maxOdd += maxValues[i];
                }
                else
                {
                    count += 2;
                    maxOdd += maxValues[i];
                }
            }
        }
        cout << count << nl;
    }
    return 0;
}