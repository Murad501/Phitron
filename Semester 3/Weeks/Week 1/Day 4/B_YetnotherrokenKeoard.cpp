#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        words.push_back(word);
    }

    vector<string> ansWords;
    for(auto word:words){
        string processingWord;
        vector<int> smallIndexes;
        vector<int> capitalIndexes;

        int wordLength = word.length();
        for(int i=0; i<wordLength; i++){
            if(word[i] == 'B' && processingWord.length()){

            }else if(word[i] == 'b' && processingWord.length()){

            }else{
                processingWord.push_back(word[i]);
            }
        }
        ansWords.push_back(processingWord);
    }

    return 0;
}