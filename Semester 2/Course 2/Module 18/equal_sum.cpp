#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    if (s % 2 == 0)
    {
        int sum = s % 2;
        bool dp[n + 1][sum + 1];
        dp[0][0] = true;
        for (int i = 1; i <= n; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {

            for (int j = 0; j <= sum; j++)
            {
                if (a[i - 1] <= j)
                {

                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][sum])
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }

    return 0;
}