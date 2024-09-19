#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int preSum[n];
    preSum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + a[i];
    }

    int l = 0;
    int r = n;

    while (l <= r)
    {
        int middle = (l + r) / 2;
        if (preSum[middle - 1] == preSum[n - 1] - preSum[middle])
        {
            cout << middle;
            break;
        }
        if (preSum[middle - 1] > preSum[n - 1] - preSum[middle])
        {
            r = middle - 1;
        }
        else
        {
            l = middle + 1;
        }
    }

    return 0;
}