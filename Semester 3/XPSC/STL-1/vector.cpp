#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // vector<int> v;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // v.pop_back();
    // int sz = v.size();
    // for (int i = 0; i < sz; i++)
    // {
    //     cout << v[i] << endl;
    // }

    // cout<<v.front() << endl;
    // cout<<v.back() << endl;

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i]<<endl;
    // }
    // auto it = v.begin()  + 1;

    

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    auto it = v.end() - 1;
    cout<<*it<<endl;
    

        return 0;
}