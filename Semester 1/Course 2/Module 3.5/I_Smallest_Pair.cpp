#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int minVal;
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                int currentVal = a[j] + a[k] + (k + 1) - (j + 1);

                if (j == 0 && k == 1)
                {
                    minVal = currentVal;
                }

                minVal = min(minVal, currentVal);
            }
        }

        cout << minVal << endl;
    }

    return 0;
}