#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int mod = y % 2;
    int half = y / 2;

    if (x < half + mod)
    {
        cout << "PLASTIC";
    }
    else
    {
        cout << "METAL";
    }
    return 0;
}