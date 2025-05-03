#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp.insert({b, a});
    }
    while (m--)
    {
        string a1, b1;
        cin >> a1 >> b1;
        string temp = b1;
        temp.pop_back();
        cout << a1 << " " << b1 << " " << "#" << mp[temp] << endl;
    }

    return 0;
}