#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    // list<int> newList;
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());

    // myList.push_back(111);
    // myList.push_front(111);
    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 0), 100);
    // myList.erase(next(myList.begin(), 1));

    // list<int>newList = {100, 333, 212};

    // myList.insert(next(myList.begin(), 2), {100, 333, 212});
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());

    // for (int val : myList)
    // {
    //     cout << val << endl;

    // }

    auto it = find(myList.begin(), myList.end(), 20);
    if (it == myList.end())
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found and erased" << endl;
    }

    return 0;
}