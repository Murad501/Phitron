#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int b1 = 0;
    int b2 = n * 2 - 3;
    int v = 1;
    int l = n * 2 - 1;

    bool first = true;
    for (int i = 1; i <= l; i++)
    {

        for (int j = 0; j < b1; j++)
        {
            cout << " ";
        }
        cout << v;
        for (int j = 0; j < b2; j++)
        {
            cout << " ";
        }
        if (i != n)
        {
            cout << v;
        }
        cout << endl;

        if (i == n)
        {
            first = false;
        }

        if (first)
        {
            b1++;
            b2 -= 2;
        }
        else
        {
            b1--;
            b2 += 2;
        }

        if (v == 2)
        {
            v = 0;
        }
        else
        {
            v++;
        }
    }

    return 0;
}