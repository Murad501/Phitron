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
    int x;
    cin >> x;

    int l = 0;
    int r = n;

    bool flag = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid == x)
        {
            flag = true;
            break;
        }

        if (mid > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (flag == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}