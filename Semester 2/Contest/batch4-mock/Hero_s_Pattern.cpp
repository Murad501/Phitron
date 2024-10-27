#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b1 = n - 1;
    int b2 = 0;
    int l = n * 2 - 1;
    int s = n;

    bool first = true;
    for (int i = 1; i <= l; i++)
    {

        for (int j = 0; j < b1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < s; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < b2; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < b2; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < s; j++)
        {
            cout << "*";
        }

        cout << endl;

        if (i == n)
        {
            first = false;
        }

        if (first == true)
        {
            b1--;
            s--;
            b2 += 2;
        }
        else
        {
            b1++;
            s++;
            b2 -= 2;
        }
    }
    return 0;
}