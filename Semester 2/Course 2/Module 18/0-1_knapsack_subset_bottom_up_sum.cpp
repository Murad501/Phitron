#include <bits/stdc++.h>
using namespace std;

// bool subset_sum(int n, int a[], int s)
// {

//     if (s == 0)
//         return true;
//     if (n == 0)
//         return false;

//     if(dp[n][s] != -1) return dp[n][s];

//     if (a[n - 1] <= s)
//     {
//         bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
//         bool op2 = subset_sum(n - 1, a, s);

//         return dp[n][s] = op1 || op2;
//     }
//     else
//     {
//         return dp[n][s] = subset_sum(n - 1, a, s);
//     }
// }

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;

    bool dp[n + 1][s + 1];

    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
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

    if (dp[n][s])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}