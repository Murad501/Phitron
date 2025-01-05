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

        int length = smalls.size() + capitals.size();

        char processingWord[length];
        for (int j = length - 1; j >= 0; j--)
        {

            if (!smalls.empty() && !capitals.empty())
            {
                pair<int, char> cap = capitals.top();
                pair<int, char> sm = smalls.top();
                if (cap.first > sm.first)
                {
                    processingWord[j] = cap.second;
                    capitals.pop();
                }
                else
                {
                    processingWord[j] = sm.second;
                    smalls.pop();
                }
            }
            else if (!smalls.empty())
            {
                pair<int, char> sm = smalls.top();
                processingWord[j] = sm.second;
                smalls.pop();
            }
            else if (!capitals.empty())
            {
                pair<int, char> cap = capitals.top();
                processingWord[j] = cap.second;
                capitals.pop();
            }
        }

        string ans;

        for (int j = 0; j < length; j++)
        {
            ans.push_back(processingWord[j]);
        }

        cout << ans << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         int ch_lower = 0, ch_upper = 0;
//         deque<char> dq;
//         for (int i = s.size() - 1; i >= 0; i--)
//         {
//             if (s[i] == 'B')
//             {
//                 ch_upper++;
//             }
//             else if (s[i] == 'b')
//             {
//                 ch_lower++;
//             }
//             else if (ch_lower && islower(s[i]))
//             {
//                 ch_lower--;
//             }
//             else if (ch_upper && isupper(s[i]))
//             {
//                 ch_upper--;
//             }
//             else
//             {

//                 dq.push_front(s[i]);
//             }
//         }
//         for (auto &it : dq)
//         {
//             cout << it;
//         }
//         cout << endl;
//     }
//     return 0;
// }
