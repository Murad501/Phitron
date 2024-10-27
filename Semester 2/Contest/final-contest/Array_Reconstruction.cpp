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

        long long int currentSum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int a;
            cin >> a;
            currentSum += a;
        }
        long long int sum;
        
        cin >> sum;
        long long int val = sum - currentSum + 1;
        cout << val << endl;
    }
    return 0;
}