#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ar[26];
    memset(ar, 0, sizeof(ar));

    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        ar[s[i] - 'a']++;
    }

    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (ar[i] == 0)
        {
            ans = i + 'a';
            break;
        }
    }

    if (ans == -1)
    {
        cout << "None" << '\n';
    }
    else
    {
        char c = ans;

        cout << c << "\n";
    }

    return 0;
}