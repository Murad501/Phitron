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
        string word;
        cin >> word;
        set<char> wordChars;
        for (char c : word)
        {
            wordChars.insert(c);
        }
        string currentWord;
        for (auto c : wordChars)
        {
            currentWord.push_back(c);
        }

        map<char, char> pairs;

        int loopSz = currentWord.size() / 2;
        for (int i = 0; i < loopSz; i++)
        {
            int sz = currentWord.size();
            char beginChar = currentWord[i];
            char endChar = currentWord[sz - 1 - i];
            pairs[beginChar] = endChar;
            pairs[endChar] = beginChar;
        }

        if (currentWord.size() % 2 == 1)
        {
            pairs[currentWord[loopSz]] = currentWord[loopSz];
        }

        string encodedWord;
        for (char c : word)
        {

            char pairVal = pairs[c];
            encodedWord.push_back(pairVal);
        }
        cout << encodedWord << endl;
    }
    return 0;
}