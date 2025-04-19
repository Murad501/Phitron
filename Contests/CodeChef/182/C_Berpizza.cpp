#include <bits/stdc++.h>
using namespace std;
#define ll long long

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first != b.first)
            return a.first > b.first;
        else
        {
            return a.second < b.second;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<pair<int, int>> mono;
    multiset<pair<int, int>, cmp> poly;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int cost;
            cin >> cost;
            mono.insert({c, cost});
            poly.insert({cost, c});
            c++;
        }
        else if (x == 2)
        {
            auto it = mono.begin();
            int num = it->first;
            int cost = it->second;
            cout << num << " ";
            mono.erase({num, cost});
            poly.erase({cost, num});
        }
        else
        {
            auto it = poly.begin();
            int num = it->second;
            int cost = it->first;
            cout << num << " ";
            mono.erase({num, cost});
            poly.erase({cost, num});
        }
    }

    return 0;
}