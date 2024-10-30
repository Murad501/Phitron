#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, string> words;

    while (n--)
    {
        string a, b;
        cin >> a >> b;
        auto it = words.find(a);
        if (it == words.end())
        {
            words[b] = a;
        }
        else
        {
            string s = it->second;
            words.erase(it);
            words[b] = s;
        }
    }
    int sz = words.size();
    cout << sz << '\n';
    for (auto [first, second] : words)
    {
        cout << second << " " << first << '\n';
    }
    return 0;
}