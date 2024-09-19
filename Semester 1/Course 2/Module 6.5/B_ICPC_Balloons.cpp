#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ar[26] = {0};

        for (int j = 0; j < n; j++)
        {
            ar[s[j] - 'A']++;
        }

        int total = 0;
        for (int j = 0; j < 26; j++)
        {
            if (ar[j] != 0)
            {
                total += ar[j] + 1;
            }
        }
        cout << total << endl;
    }

    return 0;
}