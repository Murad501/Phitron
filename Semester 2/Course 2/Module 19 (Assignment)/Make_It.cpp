#include <bits/stdc++.h>
using namespace std;

int dp[100005];
int n;
int isMake(int v)
{
    if (v == n)
        return 1;
    if (v > n)
        return 0;

    if (dp[v] != -1)
    {

        return dp[v];
    }

    int opt1 = isMake(v + 3);
    int opt2 = isMake(v * 2);
    return dp[v] = opt1 || opt2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            dp[i] = -1;
        }

        int flag = isMake(1);
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}