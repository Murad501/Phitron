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

    int x[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            x[i] = 0;
        }
        else
        {
            x[i] = x[i - 1] + a[i - 1];
        }
    }

    for (int v : x)
    {
        cout << v << " ";
    }

    return 0;
}