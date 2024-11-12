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
        int negativeCounts = 0;
        int negativeSum = 0;
        int positiveSum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                negativeCounts++;
            }
        }

        if (negativeCounts == n)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << negativeCounts << nl;
        }
    }
    return 0;
}