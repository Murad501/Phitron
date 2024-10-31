#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> peoples;
    while (n--)
    {
        string people;
        cin >> people;
        auto it = peoples.find(people);
        if (it == peoples.end())
        {
            peoples.insert(people);
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}