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
        string arrWords[3][n];
        map<string, int> words;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                arrWords[i][j] = word;
                auto it = words.find(word);
                if (it == words.end())
                {
                    words[word] = 3;
                }
                else
                {
                    if (it->second == 3)
                    {
                        words[word] = 1;
                    }
                    else
                    {
                        words[word] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += words[arrWords[i][j]];
            }
            cout << sum << " ";
        }

        cout << "\n";
    }
    return 0;
}