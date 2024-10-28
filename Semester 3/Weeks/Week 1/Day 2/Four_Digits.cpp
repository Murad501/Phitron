#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    if (n > 999)
    {
        cout << n << '\n';
    }
    else if (n > 99)
    {
        cout << 0 << n << '\n';
    }
    else if (n > 9)
    {
        cout << 0 << 0 << n << '\n';
    }
    else
    {
        cout << 0 << 0 << 0 << n << '\n';
    }

    // cout<<setw(4)<<setfill('0')<<n<<'\n';
    return 0;
}