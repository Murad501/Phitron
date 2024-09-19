#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool firstWord = true;
    while (ss >> word)
    {
        if (!firstWord)
        {
            cout << " ";
        }
        firstWord = false;
        reverse(word.begin(), word.end());
        cout << word;
    }
    return 0;
}