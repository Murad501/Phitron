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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        int negativeSum = 0, negativeRest = 0, positiveSum = 0, positiveRest = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                int val = v[i] / k;
                if (v[i] % k != 0)
                {
                    negativeRest++;
                }
                negativeSum += val;
            }
            else
            {
                int val = v[i] / k;
                if (v[i] % k != 0)
                {
                    positiveRest++;
                }
                positiveSum += val;
            }
        }

        bool flag = false;
        if (abs(negativeSum) == positiveSum)
        {
            flag = true;
        }
        else
        {
            if (abs(negativeSum) > positiveSum)
            {
                positiveSum += positiveRest;
                if (positiveSum >= abs(negativeSum))
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
            else
            {
                positiveSum -= negativeRest;
                if (positiveSum <= abs(negativeSum))
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}