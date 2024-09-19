#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);
        pair<string, int> pr;
        stringstream ss(sentence);
        string word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > pr.second)
            {
                pr = {word, mp[word]};
            }
        }

        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}