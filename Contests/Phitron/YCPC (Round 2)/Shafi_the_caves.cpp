#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int numbers[n]; ;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            numbers[i] = x;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int maxPossible = 0;
            for (int j = 0; j < n; j++)
            {
                if (numbers[i] % numbers[j] == 0)
                {
                    maxPossible++;
                }
            }
            ans = max(ans, maxPossible);
        }

        cout << ans << '\n';
    }

    return 0;
}