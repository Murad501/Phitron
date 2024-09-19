#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int preSum[n];

    preSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    reverse(preSum, preSum + n);
    for (long long int val : preSum)
    {
        cout << val << " ";
    }

    return 0;
}