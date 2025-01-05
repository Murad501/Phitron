#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    long long int preSum[n];
    preSum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        if (i == 0)
        {
            preSum[i] = x;
        }
        else
        {
            preSum[i] = preSum[i - 1] + x;
        }
    }

    long long int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (preSum[i] % 2 == 0)
        {
            ans = preSum[i];
            break;
        }
    }

    cout << ans << "\n";

    return 0;
}