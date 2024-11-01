#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string names[n];

    for (int i = 0; i < n; i++)
    {

        string name;
        cin >> name;
        names[i] = name;
    }

    set<string> uniques;
    for (int i = n - 1; i >= 0; i--)
    {
        string name = names[i];
        auto it = uniques.find(name);
        if (it == uniques.end())
        {
            cout << name << '\n';
        }
        uniques.insert(name);
    }

    return 0;
}