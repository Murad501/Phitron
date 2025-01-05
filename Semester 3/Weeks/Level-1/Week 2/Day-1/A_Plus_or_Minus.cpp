#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool plus = true;
        if (a + b == c)
        {
            cout << '+' << '\n';
        }
        else
        {
            cout << '-' << '\n';
        }
    }
    return 0;
}