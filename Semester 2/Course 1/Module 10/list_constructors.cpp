#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(10, 5);
    int a[5] = {0, 1, 2, 3, 4};
    vector<int> v = {11, 22, 33, 44, 55};
    list<int> myList2 = {1, 2, 3, 4, 5};
    // list<int>myList(a, a+5);
    list<int> myList(v.begin(), v.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}