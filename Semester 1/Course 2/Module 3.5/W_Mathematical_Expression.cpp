#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == '+')
    {
        int ans = a + b;
        if (ans == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << ans;
        }
    }
    else if (s == '-')
    {
        int ans = a - b;
        if (ans == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << ans;
        }
    }
    else
    {
        int ans = a * b;
        if (ans == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << ans;
        }
    }
    return 0;
}