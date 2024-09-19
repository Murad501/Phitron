#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }

    cout << s << endl;

    return 0;
}