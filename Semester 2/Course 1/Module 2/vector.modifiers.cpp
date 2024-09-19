#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10, 20, 30, 40};
    vector<int> y = {100, 200, 300, 400};

    x.insert(x.begin() + 2, y.begin(), y.end());

    for (int a : x)
    {
        cout << a << " ";
    }
    cout << endl;

    x.erase(x.begin() + 3, x.begin() + 6);
    for (int a : x)
    {
        cout << a << " ";
    }

    return 0;
}