#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; type 1
    // vector<int> v(5);  type 2
    // vector<int> v(5, 10);  type 3

    // vector<int>v2(5, 100); type 4
    // vector<int>v(v2);     

    // int a[6] = { 0, 1, 2, 3, 4, 5 };    type 5
    // vector<int> v(a, a + 6);

    vector<int> v = { 0, 1};

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    cout<<v.size()<<endl;
    return 0;
}