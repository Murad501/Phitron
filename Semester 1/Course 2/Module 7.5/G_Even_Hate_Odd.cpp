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
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int evenCount = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                evenCount++;
            }

        }

        if (evenCount == n)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }

    return 0;
}