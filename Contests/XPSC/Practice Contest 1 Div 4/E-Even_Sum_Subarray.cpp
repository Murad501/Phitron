#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int items = 0;
        int sequence = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
            {
                sequence++;
            }
        }
    }

    return 0;
}