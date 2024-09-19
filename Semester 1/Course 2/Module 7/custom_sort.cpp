#include <bits/stdc++.h>
using namespace std;

class Freq
{
public:
    char value;
    int count;
};

bool cmp(Freq a, Freq b)
{
    if (a.count == b.count)
    {
        return a.value < b.value;
    }
    else
    {

        return a.count > b.count;
    }
}
int main()
{
    string s;
    cin >> s;
    Freq arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i].value = char('a' + i);
        arr[i].count = 0;
    }
    for (char c : s)
    {
        arr[c - 'a'].count++;
    }
    sort(arr, arr + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (arr[i].count > 0)
        {
            cout << arr[i].value << " " << arr[i].count << endl;
        }
    }

    return 0;
}