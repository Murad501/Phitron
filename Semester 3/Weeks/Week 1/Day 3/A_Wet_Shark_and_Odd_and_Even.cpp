
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    long long int sum = 0;
    int oddCount = 0;
    int smallOdd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        sum += x;
        if (x % 2 == 1)
        {
            oddCount++;
            smallOdd = min(smallOdd, x);
        }
    }


    if (oddCount % 2 == 0)
    {
        cout << sum << '\n';
    }

    else 
    {
        cout << sum - smallOdd << '\n';
    }

    return 0;
}