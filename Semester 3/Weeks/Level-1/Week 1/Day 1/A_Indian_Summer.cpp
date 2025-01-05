#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<string, string>> values;

    while (n--)
    {
        string tree;
        string color;
        cin >> tree >> color;
        values.insert({tree, color});
    }
    cout << values.size() << endl;

    return 0;
}