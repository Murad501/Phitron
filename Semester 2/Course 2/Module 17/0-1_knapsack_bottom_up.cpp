#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int weight[n], value[n];

    for (int i = 0; i < n; i++)
    {

        cin >> weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int W;
    cin >> W;

    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= W; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (weight[i - 1] <= j)
            {

                int op1 = dp[i - 1][j - weight[i-1]] + value[i];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << "Maximum value that can be obtained is: " << dp[n][W] << endl;

    return 0;
}