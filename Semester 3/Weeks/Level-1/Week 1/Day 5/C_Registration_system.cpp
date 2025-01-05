#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> users;
    while (n--)
    {
        string user;
        cin >> user;
        auto it = users.find(user);
        if (it == users.end())
        {
            users[user] = 0;
            cout << "OK" << '\n';
        }
        else
        {
            users[user]++;
            cout << user << users[user] << '\n';
        }
    }
    return 0;
}