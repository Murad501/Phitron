#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int first = 0;
        int second = 0;
        for (int i = 0; i < n; i++)
        {

            char c;

            cin >> c;

            if (c == '(')
            {
                first++;
            }
            else
            {
                second++;
            }
        }

        if (first == second)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}