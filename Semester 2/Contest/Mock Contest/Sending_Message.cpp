#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> words;
    string word;
    while (cin >> word)
    {
        words.push_back(word);
    }

    int n = words.size();

    for (int i = 0; i < n; i += 2)
    {
        if (words[i] == words[i + 1])
        {
            cout << "Possible" << endl;
        }
        else
        {

            int firstSize = words[i].size();
            int secondSize = words[i + 1].size();
            string firstWord = words[i];
            string mainWord = words[i + 1];

            int index = 0;

            for (int j = 0; j < firstSize; j++)
            {
                if (mainWord[index] == firstWord[j])
                {
                    index++;
                }
            }

            

            if (index == secondSize)
            {
                cout << "Possible" << endl;
            }
            else
            {

                cout << "Impossible" << endl;
            }
        }
    }

    return 0;
}