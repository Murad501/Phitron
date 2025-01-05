#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> passwords;

    while (n--)
    {
        string s;
        cin >> s;
        passwords.push_back(s);
    }

    for (auto password : passwords)
    {
        int insertIdx = 0;
        int passwordSize = password.size();
        for (int i = 1; i < passwordSize; i++)
        {
            if (password[i] == password[i - 1])
            {
                insertIdx = i;
                break;
            }
        }

        string ans;
        for (int i = 0; i < passwordSize; i++)
        {
            if (i == insertIdx)
            {
                if (password[i] == 'x')
                {
                    ans.push_back('y');
                }
                else
                {
                    ans.push_back('x');
                }
            }
            ans.push_back(password[i]);
        }

        cout << ans << endl;
    }

    return 0;
}