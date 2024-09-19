#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n <= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag = 0;
            for (int j = 0; j < n - 2; j++)
            {
                for (int k = j + 1; k < n - 1; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        if (a[j] + a[k] + a[l] == s)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            (flag == 1) ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}