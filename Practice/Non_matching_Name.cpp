#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int freq[26];
        memset(freq, 0, sizeof(freq));
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            freq[x - 'a']++;
        }
        for (int i = 0; i < m; i++)
        {
            char x;
            cin >> x;
            freq[x - 'a']++;
        }

        bool isPossible = false;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 0)
            {
                isPossible = true;
                break;
            }
        }

        if (isPossible)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}