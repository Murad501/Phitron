#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.resize(2);

    cout << v.capacity() << endl;
    return 0;
}