#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int loss = 0;
        int win = 0;

        for (int i = 1; i <= x - n; i++)
        {
            loss = loss + pow(2, i);
        }

        for (int i = x - n + 1; i <= x; i++)
        {
            win = win + pow(2, i);
        }

        cout << win - loss << endl;
    }
    return 0;
}