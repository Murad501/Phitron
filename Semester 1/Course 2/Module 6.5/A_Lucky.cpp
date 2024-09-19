#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int firstThreeSum = 0;
        int lastThreeSum = 0;
        for (int j = 0; j < 3; j++)
        {
            firstThreeSum += s[j] - '0';
        }
        for (int j = 3; j < 6; j++)
        {
            lastThreeSum += s[j] - '0';
        }


        if (firstThreeSum == lastThreeSum){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}