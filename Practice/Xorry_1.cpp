#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int minA = 0, minB = 0;
        int minDiff = INT_MAX;

        for (int A = 0; A <= x; A++)
        {
            int B = A ^ x;
            if (A <= B && B <= x)
            {
                if (B - A < minDiff)
                {
                    minA = A;
                    minB = B;
                }
            }
        }
        cout << minA << " " << minB << '\n';
    }
    return 0;
}