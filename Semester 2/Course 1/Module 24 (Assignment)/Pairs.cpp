#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first > b.first)
            return true;
        else if (a.first == b.first)
        {
            if (a.second < b.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> users;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int val;
        cin >> name >> val;
        users.push({name, val});
    }

    while (!users.empty())
    {
        cout << users.top().first << " " << users.top().second << endl;
        users.pop();
    }

    return 0;
}