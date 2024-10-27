#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int firstMinValue = INT_MAX;
    int secondMinValue = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < firstMinValue)
        {
            secondMinValue = firstMinValue;
            firstMinValue = arr[i];
        }
        else if (arr[i] < secondMinValue)
        {
            secondMinValue = arr[i];
        }
    }

    cout << firstMinValue + secondMinValue << endl;
    return 0;
}