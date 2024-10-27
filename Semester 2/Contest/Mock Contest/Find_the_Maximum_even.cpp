#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int maxEven = INT_MIN;
    int secondMaxEven = INT_MIN;

    int maxOdd = INT_MIN;
    int secondMaxOdd = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;

        if (a % 2 == 0)
        {
            if (a > maxEven)
            {
                secondMaxEven = maxEven;
                maxEven = a;
            }
            else if (a > secondMaxEven && a != maxEven)
            {
                secondMaxEven = a;
            }
        }
        else
        {
            if (a > maxOdd)
            {
                secondMaxOdd = maxOdd;
                maxOdd = a;
            }
            else if (a > secondMaxOdd && a != maxOdd)
            {
                secondMaxOdd = a;
            }
        }
    }

    int evenMax, oddMax;
    if (maxEven == INT_MIN || secondMaxEven == INT_MIN)
    {
        evenMax = max(maxEven, secondMaxEven);
    }
    else
    {
        evenMax = maxEven + secondMaxEven;
    }

    if (maxOdd == INT_MIN || secondMaxOdd == INT_MIN)
    {
        oddMax = INT_MIN;
    }
    else
    {
        oddMax = maxOdd + secondMaxOdd;
    }

    cout << max(evenMax, oddMax) << '\n';

    return 0;
}