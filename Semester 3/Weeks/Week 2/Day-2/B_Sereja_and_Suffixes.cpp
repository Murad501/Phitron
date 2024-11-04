#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    set<int> uniques;
    map<int, int> mp;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int i = n; i >= 1; i--)
    {
        int num = arr[i - 1];
        uniques.insert(num);
        mp[i] = uniques.size();
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        cout << mp[a] << endl;
    }

    return 0;
}