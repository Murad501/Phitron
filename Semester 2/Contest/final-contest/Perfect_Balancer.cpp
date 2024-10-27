#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    long long int preSum[n] = {0};
    preSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    bool isExist = false;
    int idx = -1;

    for (int i = 1; i <= n; i++)
    {
        if (preSum[i] == (preSum[n - 1] - preSum[i]))
        {
            isExist = true;
            idx = i;
            break;
        }
    }

    if (isExist)
    {
        cout << preSum[idx] << " " << idx + 1 << endl;
    }
    else
    {
        cout << "UNSTABLE" << endl;
    }

    return 0;
}