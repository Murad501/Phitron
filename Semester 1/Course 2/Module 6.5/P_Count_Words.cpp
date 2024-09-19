#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        int wordLen = word.size();
        for (int i = 0; i < wordLen; i++)
        {
            if (i == 0 && word[i] == '!' || word[i] == '.' || word[i] == '.' || word[i] == '?')
            {
                break;
            }
            else if (word[i] >= 'A' && word[i] <= 'Z' || word[i] >= 'a' && word[i] <= 'z')
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}