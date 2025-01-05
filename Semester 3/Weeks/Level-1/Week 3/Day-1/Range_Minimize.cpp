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

        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        sort(a.begin(), a.end(), greater<int>());

        if (n < 4)
        {
            cout << 0 << nl;
        }
        else
        {

            vector<int> a1, b1;
            for (int i = 0; i < 3; i++)
            {
                a1.push_back(a[i]);
            }

            for (int i = n - 1; i >= n - 3; i--)
            {
                b1.push_back(a[i]);
            }

            int ans = INT_MAX;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i < 2 && j < 2)
                    {
                        int dif = a1[i] - b1[j];
                        ans = min(ans, dif);
                    }
                    else if (i == 2 && j == 0)
                    {
                        ans = min(ans, a1[i] - b1[j]);
                    }
                    else if (i == 0 && j == 2)
                    {
                        ans = min(ans, a1[i] - b1[j]);
                    }
                }
            }
            cout << ans << nl;
        }
    }
    return 0;
}