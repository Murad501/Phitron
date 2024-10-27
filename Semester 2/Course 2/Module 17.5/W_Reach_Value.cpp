#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;


bool isReach(ll val)
{
    if (val > n)
        return false;
    if (val == n)
        return true;

    return isReach(val * 10) || isReach(val * 20);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool flag = isReach(1);

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}