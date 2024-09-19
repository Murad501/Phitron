#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int firstSp = 0;
    int secondSp = n - 2;
    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            for (int j = 0; j < firstSp; j++)
            {
                cout << " ";
            }
            cout << "X" << endl;
            firstSp--;
            secondSp += 2;
        }

        else if (i < n / 2)
        {
            for (int j = 0; j < firstSp; j++)
            {
                cout << " ";
            }
            cout << "\\";
            for (int j = 0; j < secondSp; j++)
            {
                cout << " ";
            }
            cout << "/" << endl;
            firstSp++;
            secondSp -= 2;
        }
        else
        {
            for (int j = 0; j < firstSp; j++)
            {
                cout << " ";
            }
            cout << "/";
            for (int j = 0; j < secondSp; j++)
            {
                cout << " ";
            }
            cout << "\\" << endl;
            firstSp--;
            secondSp += 2;
        }
    }

    return 0;
}