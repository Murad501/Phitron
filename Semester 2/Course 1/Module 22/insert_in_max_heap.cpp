#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;

    v.push_back(x);
    int cur_idx = v.size() - 1;
    // cout<<cur_idx<<endl;

    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
            cur_idx = parent_idx;
        }else{
            break;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}