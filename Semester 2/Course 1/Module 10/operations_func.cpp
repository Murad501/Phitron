#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {2, 3, 6, 33, 44, 1, 44, 61, 74, 66, 2, 55, 24, 451, 12, 4, 5, 31};
    // myList.remove(2);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();

    myList.reverse();

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}