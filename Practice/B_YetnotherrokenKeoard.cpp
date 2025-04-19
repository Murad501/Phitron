#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> words;
    for (int i = 0; i < t; i++)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }

    for (int i = 0; i < t; i++)
    {
        stack<pair<int, char>> capitals;
        stack<pair<int, char>> smalls;

        string word = words[i];
        int sz = word.size();
        for (int j = 0; j < sz; j++)
        {
            if (word[j] == 'B')
            {
                if (!capitals.empty())
                {

                    capitals.pop();
                }
            }
            else if (word[j] == 'b')
            {
                if (!smalls.empty())
                {

                    smalls.pop();
                }
            }
            else if (word[j] >= 'A' && word[j] <= 'Z')
            {
                capitals.push({j, word[j]});
            }
            else
            {
                smalls.push({j, word[j]});
            }
        }

        map<int, char> mp;
        while (!capitals.empty())
        {
            pair<int, char> cap = capitals.top();
            mp[cap.first] = cap.second;
            capitals.pop();
        }
        while (!smalls.empty())
        {
            pair<int, char> sml = smalls.top();
            mp[sml.first] = sml.second;
            smalls.pop();
        }

        for (auto [key, value] : mp)
        {
            cout << value;
        }
        cout << '\n';
    }

    return 0;
}