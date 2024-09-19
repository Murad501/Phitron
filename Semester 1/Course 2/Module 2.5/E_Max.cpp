#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        maxNum = max(maxNum, num);
    }

    cout << maxNum << endl;

    return 0;
}