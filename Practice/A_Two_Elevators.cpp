#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, a_cnt = 0, b_cnt = 0;
        cin >> a >> b >> c;

        if (a == 1)
            cout << 1 << endl;
        else
        {
            a_cnt = a - 1;
            if (b < c)
                b_cnt = (c - b) + 1;
            else
                b_cnt = b - c;
        }
        if (a != 1 && a_cnt < b_cnt)
            cout << 1 << endl;
        else if (a != 1 && b_cnt < a_cnt)
            cout << 2 << endl;
        else if (a != 1 && a_cnt == b_cnt)
            cout << 3 << endl;
    }
    return 0;
}