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

    int flag = 1;
    int j = 0;
    int k = n - 1;
    while (j < k)
    {
        if (a[j] != a[k])
        {
            flag = 0;
            break;
        }
        j++;
        k--;
    }

    (flag == 1) ? cout << "YES" : cout << "NO";

    return 0;
}